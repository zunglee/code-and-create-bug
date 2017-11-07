package assignment.tree;

public class Node{

	private	Node parent;
	private Node left;
	private Node right;
	private int key;

	Node(){
		parent = null;
		right = null;
		left = null;
	}

	Node(int k){
		parent = null;
		left = null;
		right = null;
		key = k;
	}

	public int getKey(){
		return key;
	}
	public void setKey(int k){
		key = k;
	}

	public Node getParent(){
		return parent;
	}
	public void setParent(Node n){
		parent = n;
	}

	public Node getRight(){
		return right;
	}
	public void setRight(Node n){
		right = n;
	}

	public Node getLeft(){
		return left;
	}
	public void setLeft(Node n){
		left = n;
	}
}
