package assignment.graph.main;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Random;
import java.util.Scanner;
import java.util.Stack;

import assignment.graph.kruskalAlgorithm.KruskalAlgorithm;

public class GraphAssignemt {

	private String fileName ="";
	private int noOfNode = 0;
	private float density =0;
	private String filePath = "";
	
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);

// taking the input 		
		
		GraphAssignemt gA = new GraphAssignemt();
		
		System.out.println("Please Input the following");
		System.out.print("No Of Node = ");
		gA.noOfNode = sc.nextInt();
		System.out.print("Graph Density = ");
		gA.density =sc.nextFloat();
		System.out.print("Output file Name = ");
		gA.fileName = sc.next();
		gA.filePath = "/tmp/"+gA.fileName+".txt";

//end
		
		
//		int[][] adjacencyMatrix = gA.getDummyMatrix();
		
		
		while(!gA.checkDensityValidity(gA.density, gA.noOfNode )){
			 gA.noOfNode = sc.nextInt();
			 gA.density =sc.nextFloat();
		}
		System.out.println("All Input Taken\n");
		
		gA.createRandomUndirectedGraph();
		gA.DFS();
		gA.BFS();

		KruskalAlgorithm kruskalAlgo = new KruskalAlgorithm();
		int[][] adjacencyMatrix = gA.createAndGetAdjacencyMatrix(gA.noOfNode);
		kruskalAlgo.implementKruskalAlgo(adjacencyMatrix,gA.noOfNode);
	}
	
	
	public int convertStringToIndex(String nodeName){
		int index = 0;
		index = nodeName.charAt(0)-'A';
		return index;
	}
	
	
	public int[][] getDummyMatrix(){
		 int[][] adjacencyMatrix = { {0,2,0,0,3,0,0,0,0,0},{2,0,7,1,16,0,0,0,0,0},{0,7,0,6,0,0,15,0,0,0},
	           			             {0,1,6,0,0,0,5,0,0,0},{3,16,0,0,0,7,0,17,0,0},{0,0,0,0,7,0,15,0,0,23},
				                     {0,0,15,5,0,15,0,0,0,0},{0,0,0,0,17,0,0,0,16,31},{0,0,0,0,0,0,0,16,0,18},
				                     {0,0,0,0,0,23,0,31,18,0} };
		return adjacencyMatrix;
	}
	
	public int[][] createAndGetAdjacencyMatrix(int size) throws IOException{
		int[][] adjacencyMatrix = new int[this.noOfNode][this.noOfNode];
		
		String fromNode = "";
		String toNode = "";
		int weight = 0;
		BufferedReader br = new BufferedReader(new FileReader(this.fileName));
		try{
		    for(String line; (line = br.readLine()) != null; ) {
		    	fromNode = line.substring(0, line.indexOf("-"));
		    	toNode = line.substring(line.indexOf("-")+1 ,line.indexOf(" "));
		    	weight = Integer.parseInt(line.substring(line.indexOf(" ")+1));
		    	adjacencyMatrix[this.convertStringToIndex(fromNode)][this.convertStringToIndex(toNode)] = weight;
		    	adjacencyMatrix[this.convertStringToIndex(toNode)][this.convertStringToIndex(fromNode)] = weight;
		    }
		 }catch(Exception e){
		   System.out.println("error in creating adjacency matrix ["+e+"]"); // line is not visible here.
	}
		br.close();
		return adjacencyMatrix;
	
	}
	
	public void BFS() throws IOException{
		int[][] adjacencyMatrix = createAndGetAdjacencyMatrix(this.noOfNode);
		
		  int number_of_nodes = this.noOfNode;
		  int source =  0;
	        int[] visited = new int[number_of_nodes];
	        int i, element;
	        Queue<Integer> queue =  new LinkedList<Integer>();
	        visited[source] = 1;
	        queue.add(source);
	        System.out.print("BFS traversal = ");
	        while (!queue.isEmpty())
	        {
	            element = queue.remove();
	            i = 0;
	            System.out.print((char)('A'+ element) + "\t");
	            while (i < number_of_nodes)
	            {
	                if (adjacencyMatrix[element][i] != 1 && visited[i] == 0)
	                {
	                    queue.add(i);
	                    visited[i] = 1;
	                }
	                i++;
	            }
	            
	        }
	        //to print new line
	        System.out.println();
	}
	
	
	public void DFS() throws IOException{
		int[][] adjacencyMatrix = createAndGetAdjacencyMatrix(this.noOfNode);
		
		 int source = 0;
		 int number_of_nodes = this.noOfNode;
		 System.out.print("DFS traversal = ");
		 Stack<Integer> stack = new Stack<Integer>();
	        int visited[] = new int[number_of_nodes];		
	        int element = source;		
	        int i = source;		
	        System.out.print((char)('A'+ element)  + "\t");		
	        visited[source] = 1;		
	        stack.push(source);
	 
	        
	        while (!stack.isEmpty())
	        {
	            element = stack.peek();
	            i = element;	
		    while (i < number_of_nodes)
		    {
	     	        if (adjacencyMatrix[element][i] != 0 && visited[i] == 0)
		        {
	                    stack.push(i);
	                    visited[i] = 1;
	                    element = i;
	                    i = 1;
	                    System.out.print((char)('A'+ element) + "\t");
		            continue;
	                }
	                i++;
		    }
	            stack.pop();	
	        }	
	      //to print new line
	        System.out.println();
	        
	    }	
        	 
	
	public boolean checkDensityValidity(float density, int noOfNode ){
		boolean isValid = true;
		float noOfEdges = (density * noOfNode * (noOfNode-1) )/2;
		if( (noOfEdges < noOfNode)){
			System.out.println("Density is too Low !!! Please re enter values");
			isValid = false;
		}
		return isValid;
	}
	
	
	public List<String> populateNodeName(int  noOfNode){
		List<String> list = new ArrayList<String>();
		for(int i=0 ; i< noOfNode ; i++){
			list.add(String.valueOf((char)('A' + i)));
		}
		return list;
	}
	
	public void createRandomUndirectedGraph(){
		
		List<String> nodeList = new ArrayList<String>();

		nodeList = this.populateNodeName(this.noOfNode);

		System.out.println("Generated Node List :"+nodeList);
		
		getRandomEdgesAndWeightForGivenNodeList(nodeList);
	}
	
    public void getRandomEdgesAndWeightForGivenNodeList(List<String> nodeList){
    	List<String> fromNodeList = new ArrayList<String>(nodeList); 
    	List<String> toNodeList = new ArrayList<String>(nodeList); 
    	 BufferedWriter bw = null;
    	 FileWriter fstream ;
    	 PrintWriter out = null;
    	 
		try {
			fstream = new FileWriter(this.fileName, true);
            bw = new BufferedWriter(fstream);
            out = new PrintWriter(bw);
		} catch (IOException e1) {
			e1.printStackTrace();
		} 
         Random random = new Random();
         int  indexFrom ;
         int  indexTo;
         int weight ;
         int noOfEdges = (int) ((this.density * this.noOfNode * (this.noOfNode-1) )/2);
         String fromNode = "";
         String toNode = "";

         System.out.println("all cool !!!");
         
         
         while(noOfEdges !=0){
        	 noOfEdges--;
        	
        	 indexFrom = random.nextInt(fromNodeList.size()-1);
        	 fromNode = fromNodeList.get(indexFrom);
        	 fromNodeList.remove(indexFrom);
        	 
        	 indexTo = random.nextInt(nodeList.size()-1);
        	 boolean isUniqueNode = false;
        	 while(isUniqueNode != true){
        	     toNode = toNodeList.get(indexTo);
        	     
        	     //was creating issue so did this ....
        	     if(fromNodeList.size() == 1){
        	    	toNode =  fromNodeList.get(0);
        	     }
        	     //end
        	     
        	     if(!toNode.equals(fromNode) && fromNodeList.contains(toNode)){
        	    	 isUniqueNode = true;
        	     }else{
        	    	 indexTo = random.nextInt(nodeList.size()-1);
        	     }
        	 }
        	 //if all nodes are exhausted
        	 if(fromNodeList.size() ==1){
        		 fromNodeList = new ArrayList<String>(nodeList); 
        	 }
        	 
        	 weight = random.nextInt(this.noOfNode) + 1;
           try{
        	    out.println(fromNode+"-"+ toNode+ " "+ String.valueOf(weight));
           }catch (Exception e){
        	    System.err.println("Error: " + e.getMessage());
        	}
         }
         out.close();
         System.out.println(" Random Undirected graph generated !!!");
         
    }
	
	

}