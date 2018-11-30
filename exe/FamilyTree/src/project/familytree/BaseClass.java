package project.familytree;

import java.util.Scanner;

public class BaseClass {

	public static void main(String[] args) {
		
		String inputFamilyTree = "";
		Scanner sc = new Scanner(System.in);
		//inputFamilyTree = sc.nextLine();
		inputFamilyTree = "/home/ankitesh/Downloads/Project4_Skeleton/Project4_Skeleton/files/in/input1.txt";
		
		FamilyTree fT = new FamilyTree();
		try {
			fT.buildFamilyTree(inputFamilyTree);
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		//String inputQuery = sc.nextLine();
		
		
		
		//System.out.println(inputFamilyTree);

	}

}
