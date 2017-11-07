package assignment.tree;
import java.util.*;

public class TreeAssignment {
	private static Tree BINARY_TREE;

	public static void main(String[] args) {

		// TODO, add your application code
		System.out.println("Inputting data, and creating nodes in binary tree.");

		BINARY_TREE = new Tree();
		
	/*******************************/
//		BINARY_TREE.insert(25);
//		BINARY_TREE.insert(30);
//		BINARY_TREE.insert(21);
//		BINARY_TREE.insert(4);
//		BINARY_TREE.insert(92);
//		BINARY_TREE.insert(28);
//		BINARY_TREE.insert(9);
//		BINARY_TREE.insert(23);
//		BINARY_TREE.insert(15);
//		
//	/*******************************/	
//		
		
		BINARY_TREE.insert(22);
		BINARY_TREE.insert(28);
		BINARY_TREE.insert(31);
		BINARY_TREE.insert(44);
		BINARY_TREE.insert(91);
		BINARY_TREE.insert(49);
		BINARY_TREE.insert(71);
		BINARY_TREE.insert(73);
		BINARY_TREE.insert(21);
		BINARY_TREE.insert(5);
		BINARY_TREE.insert(15);
		BINARY_TREE.insert(13);
		BINARY_TREE.insert(19);
		
		System.out.println("Done!");

		Node root = BINARY_TREE.getRoot();
		LevelOrder(root);
		
		/*       
		if(Tree_Search(root,40).getKey()==71)
		{
			System.out.println("Found key ,your search works ;-)");
		}else
		{
			System.out.println("Can't find key ,your search does not work yet");
		}
*/
		System.out.println("Post Order");
		Postorder(root);
		System.out.print("\n");
	//	System.out.println("Pre Order");
	//	Preorder(root);
	//	System.out.print("\n");
		System.out.println("In Order");
		Inorder(root);
		
	}
	
	public static void deleteNode(Node root , int key){
           Node delNode = Tree_Search(root, key);
           // Node to be deleted NOT FOUND
           if(delNode == null){
        	   System.out.println("Key not Found !!!!");
           }
           //Node to be deleted is root
           if(delNode == root){
           }
           Node parent = delNode.getParent();
           //Node to be deleted have NO child i.e it is a leaf Node
           if (delNode.getLeft() == null && delNode.getRight() == null){
	        	   if(parent.getLeft() == delNode){
	        		   parent.setLeft(null);
	        	   }else{
	        		   parent.setRight(null);
	        	   }   
           }
           //Node to be deleted having only one Child
           if ((delNode.getLeft() == null && delNode.getRight()!=null) || (delNode.getLeft() != null && delNode.getRight() ==null)){
        	   Node node = null;
        	   //Node to be deleted have only left child
        	        if(delNode.getLeft() !=null){
        	            node = delNode.getLeft();	
        	        }else{
        	            node = delNode.getRight();
        	        }
        	  //Join the child to deleted Parent Node
        	        if(parent.getLeft() == delNode){
             		   parent.setLeft(node);
             	   }else{
             		   parent.setRight(node);
             	   }   		
           }
           //Node to be deleted have 2 child
           
	}
	
	public static void LevelOrder(Node root){
		Queue<Node> queue = new LinkedList<Node>();
		queue.add(root);
		queue.add(null);
		int level=0;
		while(!queue.isEmpty()){
			Node tempNode  = queue.poll();
			
			if (tempNode == null){
				System.out.println("End of Level"+level);
				queue.add(null);
	      			level = level+1;
	      			if(queue.peek() ==null){
	      				System.out.println("    -----Tree ends----");
	      				break;
	      			}
				continue;
			}			
			if(tempNode.getLeft() !=null)
				queue.add(tempNode.getLeft());
			if(tempNode.getRight() !=null)
				queue.add(tempNode.getRight());
			System.out.print(tempNode.getKey()+ " ");
		}
		
	}

	public static void Preorder (Node T)
	{
		Stack<Node> stack = new Stack<Node>();
		while(true){
			while(T != null){
				System.out.print(T.getKey()+"  ");
				stack.push(T);
				T=T.getLeft();
			}
			if(stack.isEmpty())
				break;
			T = stack.pop();
			T = T.getRight();
		}
	}

	public static void Postorder(Node T)
	{
		   Stack<Node> stack = new Stack<Node>();
	         
	        // Check for empty tree
	        if (T == null) {
	        	System.out.print("Empty Tree");
	            return ;
	        }
	        stack.push(T);
	        Node prev = null;
	        while (!stack.isEmpty()) {
	            Node current = stack.peek();
	 
	            /* go down the tree in search of a leaf an if so process it and pop
	            stack otherwise move down */
	            if (prev == null || prev.getLeft() == current || prev.getRight() == current) {
	                if (current.getLeft() != null) {
	                    stack.push(current.getLeft());
	                } else if (current.getRight() != null) {
	                    stack.push(current.getRight());
	                } else {
	                    stack.pop();
	                    System.out.print(current.getKey()+"  ");
	                }
	 
	                /* go up the tree from left node, if the child is right 
	                push it onto stack otherwise process parent and pop stack */
	            } else if (current.getLeft() == prev) {
	                if (current.getRight() != null) {
	                    stack.push(current.getRight());
	                } else {
	                    stack.pop();
	                    System.out.print(current.getKey()+"  ");
	                }
	                 
	                /* go up the tree from right node and after coming back
	                 from right node process parent and pop stack */
	            } else if (current.getRight() == prev) {
	                stack.pop();
	                System.out.print(current.getKey()+"  ");
	            }
	 
	            prev = current;
	        }
	}

	public static void Inorder(Node T)
	{
		Stack<Node> stack = new Stack<Node>();
		while(true){
			while(T != null){
				stack.push(T);
				T=T.getLeft();
			}
			if(stack.isEmpty())
				break;
			T = stack.pop();
			System.out.print(T.getKey()+"  ");
			T = T.getRight();
		}
	}

	public static Node Tree_Search(Node T, int Key){
		if (T == null){
			System.out.print("Root node is Empty");
			return null ;
		}else if(T.getKey() == Key) {
			return T;
		}else{
			while(T != null){
				if (T.getKey() == Key)
					return T ;
				else if(T.getKey() > Key){
					T = T.getLeft();
				}else T = T.getRight();					   
			}
		}
		return null;
	}
}