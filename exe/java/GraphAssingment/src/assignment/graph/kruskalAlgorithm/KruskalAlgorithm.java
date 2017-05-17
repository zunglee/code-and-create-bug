package assignment.graph.kruskalAlgorithm;


import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import assignment.graph.main.*;

public class KruskalAlgorithm extends GraphAssignemt{

	private List<Edge> edges;
    private int noOfNode;
    public static final int MIN_VALUE = 0;
    private int visited[];
    private int mst[][];
 
    public KruskalAlgorithm(){}
    
    public KruskalAlgorithm(int noOfNode)
    {
        this.noOfNode = noOfNode;
        edges = new LinkedList<Edge>();
        visited = new int[this.noOfNode];
        mst = new int[noOfNode+1][noOfNode+1];
    }
    
    public void getEdgesFromMatrix(int adjacencyMatrix[][]){
    	 for (int source = 0; source < noOfNode; source++)
         {
             for (int destination = 0; destination < noOfNode; destination++)
             {
                 if (adjacencyMatrix[source][destination] != MIN_VALUE && source != destination)
                 {
                     Edge edge = new Edge();
                     edge.setSourceNode(source) ;
                     edge.setDestinationNode(destination) ;
                     edge.setWeight(adjacencyMatrix[source][destination]);
                     adjacencyMatrix[destination][source] = MIN_VALUE;
                     edges.add(edge);
                 }
             }
         }
    }
    
 
    public void sortEdgesAscending(){
    	Collections.sort(edges, new Edge());
    }
    
    public void checkLoopAndPopulateMstMatrix(){
    	boolean finished = false;
        LoopDetection checkLoop = new LoopDetection();
        for (Edge edge : edges)
        {
            mst[edge.getSourceNode()][edge.getDestinationNode()] = edge.getWeight();
            mst[edge.getDestinationNode()][edge.getSourceNode()] = edge.getWeight();
            
            if (checkLoop.checkLoop(mst, edge.getSourceNode()))
            {
                mst[edge.getSourceNode()][edge.getDestinationNode()] = 0;
                mst[edge.getDestinationNode()][edge.getSourceNode()] = 0;
                edge.setWeight(-1);
                continue;
            }
            visited[edge.getSourceNode()] = 1;
            visited[edge.getDestinationNode()] = 1;
            for (int i = 0; i < visited.length; i++)
            {
                if (visited[i] == 0)
                {
                    finished = false;
                    break;
                } else
                {
                    finished = true;
                }
            }
            if (finished)
                break;
        }
    }
    
    public void printMst(){
    	for (int source = 0; source < noOfNode; source++)
        {
            for (int destination = 0; destination < noOfNode; destination++)
            {
            	if(mst[source][destination] !=0){
                   System.out.println((char)('A'+source)+"-"+(char)('A'+destination)+" "+mst[source][destination] + "\n");
            	}
            }
        }
    }
    
    public void kruskalAlgorithm(int adjacencyMatrix[][])
    {
        this.getEdgesFromMatrix(adjacencyMatrix);
        this.sortEdgesAscending();
        this.checkLoopAndPopulateMstMatrix();
        this.printMst();
     }
 
    public void implementKruskalAlgo(int[][] adjacencyMatrix , int noOfNode)
    {
        KruskalAlgorithm kruskalAlgorithm = new KruskalAlgorithm(noOfNode);
        kruskalAlgorithm.kruskalAlgorithm(adjacencyMatrix);
    }
}

