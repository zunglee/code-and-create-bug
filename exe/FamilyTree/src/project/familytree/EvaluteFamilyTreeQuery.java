package project.familytree;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
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
		try {
			reader = new BufferedReader(new FileReader(queryFile));
			String line = reader.readLine();
			while (line != null) {
				System.out.println(line);
				String[] names = this.getSplitGetNames(line);
				this.getRelation(names[0], names[1]);
				line = reader.readLine();
			}
			reader.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public void preProcess() {
		HashMap<String, HumanEntity> memberList = this.allNameList.memberList;

		for (Entry<String, HumanEntity> e : memberList.entrySet()) {
			String name = e.getKey();
			HumanEntity nameObj = e.getValue();
			this.preFillGenerationListValue(name, nameObj,0);
			System.out.println("OOPS");
		}
		this.allNameList.memberList = memberList;
		// return this.allNameList;
	}

	public void preFillGenerationListValue(String name, HumanEntity ancestor,int generationLevel) {
		
		HumanEntity he = this.allNameList.memberList.get(name);
		ArrayList<String> ancestorList = new ArrayList<String>();
		boolean generationLevelExist = he.ancestorList.containsKey(generationLevel);
		
		String father = ancestor.getFather();
		String mother = ancestor.getMother();
		
		if (father == null) {
			return;
		}
		
		if(generationLevelExist) {
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
	    	  this.preFillGenerationListValue(name,this.allNameList.memberList.get(iter.next()),generationLevel+1);
	        // System.out.println(iter.next());
	      }

	}

	public void getRelation(String name1, String name2) {

	}

	public String[] getSplitGetNames(String line) {
		String[] names = line.trim().split("\\s+");
		return names;
	}

}
