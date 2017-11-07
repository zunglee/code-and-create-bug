package assignment.tree;


public class Tree{

	private Node root;

	Tree(){
		root = null;
	}

	public Node getRoot(){
		return root;
	}

	public void setRoot(Node r){
		root = r;
	}

	public void insert(int key){
		Node n = new Node(key);
		Node y = null;
		Node x = root;
		while (x != null){
			y = x;
			if (n.getKey() <= x.getKey())
			{
				x = x.getLeft();
			}
			else{
				x = x.getRight();
			}
		}
		n.setParent(y);
		if (y == null)
		{
			setRoot(n);
		}
		else
		{
			if (n.getKey() <= y.getKey())
			{
				y.setLeft(n);
				//System.out.println("setting left" + n.getKey());
			}
			else
			{
				y.setRight(n);
				//System.out.println("setting right" + n.getKey());
			}
		}
	}

}