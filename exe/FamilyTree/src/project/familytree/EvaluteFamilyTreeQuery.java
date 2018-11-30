package project.familytree;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;

public class EvaluteFamilyTreeQuery {

	NameHashList allNameList = null;

	public EvaluteFamilyTreeQuery(NameHashList allNameList) {
		this.allNameList = allNameList;
	}

	public void evaluteFamilyTreeQuery(String queryFile, String outputFile) {
		BufferedReader reader;
		
		System.out.println("-------------------");
		try {
			reader = new BufferedReader(new FileReader(queryFile));
			String line = reader.readLine();
			while (line != null) {
				//System.out.println(line);
				String[] names = this.getSplitGetNames(line);
				this.getRelation(names[0], names[1]);
				//this.getRelation("mildred", "jenny");
				line = reader.readLine();
			}
			reader.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public String getRelation(String name1, String name2) {
		HashMap<Integer, ArrayList<String>> ancestorList1 = this.allNameList.memberList.get(name1).ancestorList;
		HashMap<Integer, ArrayList<String>> ancestorList2 = this.allNameList.memberList.get(name2).ancestorList;
		String res = "";
		// name2 is descendnt of name1
		if (this.checkforDescendent(name1, ancestorList2)) {
			res = name2 + " is descendnt of " + name1;
		} else if (this.checkforDescendent(name2, ancestorList1)) {
			// name1 is descendnt of name2
			res = name1 + " is descendnt of " + name2;
		} else {
			res = this.getCommonAncestor(ancestorList1, ancestorList2);
		}
		
		System.out.println(name1 + " & " + name2 + "-----"+ res);
		
		return res;
	}

	public String getCommonAncestor(HashMap<Integer, ArrayList<String>> ancestorList1,
			HashMap<Integer, ArrayList<String>> ancestorList2) {
		String res = "";
		ArrayList<String> ancestorList = new ArrayList<String>();
		String s = "";
		Integer generation1 = -1, generation2 = -1;
		boolean found = false;

		for (Entry<Integer, ArrayList<String>> e1 : ancestorList1.entrySet()) {

			if (found) {
				break;
			}
			generation1 = e1.getKey();
			ArrayList<String> nameArr1 = e1.getValue();

			Iterator<String> iter1 = nameArr1.iterator();

			while (iter1.hasNext() && !found) {
				String ancestor1 = iter1.next();

				for (Entry<Integer, ArrayList<String>> e2 : ancestorList2.entrySet()) {
					generation2 = e2.getKey();
					ArrayList<String> nameArr2 = e2.getValue();
					Iterator<String> iter2 = nameArr2.iterator();

					while (iter2.hasNext() && !found) {
						String ancestor2 = iter2.next();
						if (ancestor2.equals(ancestor1)) {
							found = true;
						}
					}
					if (found) {
						break;
					}

				}
				if (found) {
					break;
				} else {
					generation1 = generation2 = -1;
				}
			}
		}
		res = "unrelated";
		if (generation1 != -1) {
			ArrayList<String> ancestArr1 = ancestorList1.get(generation1);
			ArrayList<String> ancestArr2 = ancestorList2.get(generation2);
			
			
			Iterator<String> iter1 = ancestArr1.iterator();
			while (iter1.hasNext()) {
				String s1 = iter1.next();
				Iterator<String> iter2 = ancestArr2.iterator();
				while (iter2.hasNext()) {
					String s2 = iter2.next();
					if (s1.equals(s2)) {
						ancestorList.add(s1);
						break;
					}
				}
			}

			Collections.sort(ancestorList);

			StringBuffer sb = new StringBuffer();

			for (String strName : ancestorList) {
				sb.append(strName);
				sb.append(" ");
			}
			res = sb.toString();
		}
		
		
		//System.out.println(res);
		return res;
	}

	public boolean checkforDescendent(String name, HashMap<Integer, ArrayList<String>> ancestorList) {

		for (Entry<Integer, ArrayList<String>> e : ancestorList.entrySet()) {
			Integer generationLevel = e.getKey();
			ArrayList<String> ancestorArr = e.getValue();

			Iterator<String> iter = ancestorArr.iterator();
			while (iter.hasNext()) {
				if (name.equals(iter.next())) {
					return true;
				}
			}
		}

		return false;
	}

	public void preProcess() {
		HashMap<String, HumanEntity> memberList = this.allNameList.memberList;

		for (Entry<String, HumanEntity> e : memberList.entrySet()) {
			String name = e.getKey();
			HumanEntity nameObj = e.getValue();
			this.preFillGenerationListValue(name, nameObj, 0);
			//System.out.println("OOPS");
		}
		this.allNameList.memberList = memberList;
		// return this.allNameList;
	}

	public void preFillGenerationListValue(String name, HumanEntity ancestor, int generationLevel) {

		HumanEntity he = this.allNameList.memberList.get(name);
		ArrayList<String> ancestorList = new ArrayList<String>();
		boolean generationLevelExist = he.ancestorList.containsKey(generationLevel);

		String father = ancestor.getFather();
		String mother = ancestor.getMother();

		if (father == null) {
			return;
		}

		if (generationLevelExist) {
			he.ancestorList.get(generationLevel).add(father);
			he.ancestorList.get(generationLevel).add(mother);
		} else {
			ArrayList<String> list = new ArrayList<String>();
			list.add(father);
			list.add(mother);
			he.ancestorList.put(generationLevel, list);
		}

		ancestorList = he.ancestorList.get(generationLevel);
		Iterator<String> iter = ancestorList.iterator();
		while (iter.hasNext()) {
			this.preFillGenerationListValue(name, this.allNameList.memberList.get(iter.next()), generationLevel + 1);
			// System.out.println(iter.next());
		}

	}

	public String[] getSplitGetNames(String line) {
		String[] names = line.trim().split("\\s+");
		return names;
	}

}
