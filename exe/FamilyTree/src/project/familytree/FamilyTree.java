package project.familytree;

public class FamilyTree {

	
	
	NameHashList nameList;
	
    /**
     * Declare necessary variables to describe your Tree
     * Each Node in the Tree represents a person
     * You can declare other classes if necessary
     */

    public FamilyTree(){
    	this.nameList = new NameHashList();
    }

    /**
     * @input directory or filename of input file. This file contains the information necessary to build the child
     * parent relation. Throws exception if file is not found
     * @param familyFile
     * @throws Exception
     */

    public void buildFamilyTree(String familyFile) throws Exception{
              BuildFamilyTree bft = new BuildFamilyTree(this.nameList);
              this.nameList = bft.buildFamilyTree(familyFile);
              System.out.println("YES");
    }

    /**
     * @input directory or filename of Query and Output.
     * queryFile contains the queries about the tree.
     * The output of this query should be written in file outputfile.
     * @param queryFile
     * @param outputFile
     * @throws Exception
     */

    public void evaluate(String queryFile,String outputFile) throws Exception{
        /*
         * Traverse the tree to answer the queries
         * For information on queries take a look at the handout
         */
    }
}