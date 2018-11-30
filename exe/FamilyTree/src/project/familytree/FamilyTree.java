package project.familytree;

import java.util.Scanner;

public class FamilyTree {

	NameHashList nameList;

	public static void main(String[] args) {

		String inputFamilyTree = "";
		String queryFamilyTree = "";
		Scanner sc = new Scanner(System.in);
		// inputFamilyTree = sc.nextLine();
		// queryFamilyTree = sc.nextLine();
		inputFamilyTree = "/home/ankitesh/Downloads/Project4_Skeleton/Project4_Skeleton/files/in/input1.txt";
		queryFamilyTree = "/home/ankitesh/Downloads/Project4_Skeleton/Project4_Skeleton/files/in/query1.txt";
		FamilyTree fT = new FamilyTree();
		try {
			fT.buildFamilyTree(inputFamilyTree);
			fT.evaluate(queryFamilyTree, queryFamilyTree);
		} catch (Exception e) {
			e.printStackTrace();
		}

		// String inputQuery = sc.nextLine();

		// System.out.println(inputFamilyTree);

	}

	/**
	 * Declare necessary variables to describe your Tree Each Node in the Tree
	 * represents a person You can declare other classes if necessary
	 */

	public FamilyTree() {
		this.nameList = new NameHashList();
	}

	/**
	 * @input directory or filename of input file. This file contains the
	 *        information necessary to build the child parent relation. Throws
	 *        exception if file is not found
	 * @param familyFile
	 * @throws Exception
	 */

	public void buildFamilyTree(String familyFile) throws Exception {
		BuildFamilyTree bft = new BuildFamilyTree(this.nameList);
		this.nameList = bft.buildFamilyTree(familyFile);
		System.out.println("YES");
	}

	/**
	 * @input directory or filename of Query and Output. queryFile contains the
	 *        queries about the tree. The output of this query should be written in
	 *        file outputfile.
	 * @param queryFile
	 * @param outputFile
	 * @throws Exception
	 */

	public void evaluate(String queryFile, String outputFile) throws Exception {
		EvaluteFamilyTreeQuery obj = new EvaluteFamilyTreeQuery(this.nameList);
		obj.preProcess();
		obj.evaluteFamilyTreeQuery(queryFile, outputFile);
	}
}