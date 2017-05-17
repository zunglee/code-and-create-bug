package assignment.graph.kruskalAlgorithm;

import java.util.Stack;

public class LoopDetection {
	private Stack<Integer> stack;
    private int adjacencyMatrix[][];
 
    public LoopDetection()
    {
        stack = new Stack<Integer>();
    }
 
    public boolean checkLoop(int adjacency_matrix[][], int source)
    {
        boolean loopPresent = false;
        int noOfNodes = adjacency_matrix[source].length - 1;
 
        adjacencyMatrix = new int[noOfNodes][noOfNodes];
        for (int sourceNode = 0; sourceNode < noOfNodes; sourceNode++)
        {
            for (int destinationNode =0; destinationNode < noOfNodes; destinationNode++)
            {
                adjacencyMatrix[sourceNode][destinationNode] = adjacency_matrix[sourceNode][destinationNode];
            }
         }
 
         int visited[] = new int[noOfNodes];
         int element = source;
         int i = source;
         visited[source] = 1;
         stack.push(source);
 
         while (!stack.isEmpty())
         {
             element = stack.peek();
             i = element;
             while (i < noOfNodes)
             {
                 if (adjacencyMatrix[element][i] >= 1 && visited[i] == 1)
                 {
                     if (stack.contains(i))
                     {
                         loopPresent = true;
                         return loopPresent;
                     }
                 }
                 if (adjacencyMatrix[element][i] >= 1 && visited[i] == 0)
                 {
                     stack.push(i);
                     visited[i] = 1;
                     adjacencyMatrix[element][i] = 0;
                     adjacencyMatrix[i][element] = 0;
                     element = i;
                     i = 0;
                     continue;
                  }
                  i++;
             }
             stack.pop();
        }
        return loopPresent;
    }
	
}
