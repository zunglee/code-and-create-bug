package assignment.graph.kruskalAlgorithm;

import java.util.Comparator;

public class Edge implements Comparator<Edge>{

	
	   private int sourceNode;
	   private int destinationNode;
	   private  int weight;
	   
	public int getSourceNode() {
		return sourceNode;
	}
	public void setSourceNode(int sourceNode) {
		this.sourceNode = sourceNode;
	}
	public int getDestinationNode() {
		return destinationNode;
	}
	public void setDestinationNode(int destinationNode) {
		this.destinationNode = destinationNode;
	}
	public int getWeight() {
		return weight;
	}
	public void setWeight(int weight) {
		this.weight = weight;
	}

	@Override
	public int compare(Edge e1, Edge e2)
    {
        if (e1.weight < e2.weight)
            return -1;
        if (e1.weight > e2.weight)
            return 1;
        return 0;
    }
	
	
	
}
