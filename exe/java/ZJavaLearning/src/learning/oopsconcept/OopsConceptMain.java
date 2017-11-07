package learning.oopsconcept;

public class OopsConceptMain {

	
public static void main(String[] args){

	System.out.println("1.)\n------Invoking Child ClassA-----");
	    ChildA childA= new ChildA(12,12);
	System.out.println("!!!!Child ClassA Invoked !!!\n");
	System.out.println("2.)\n------Invoking Parent Class-----");
	    Parent parent = new Parent();
    System.out.println("!!!! Parent Class Invoked !!!\n");
	
    
    /*All function of Parent class and overriden function of ChildA 
     * can be accessed
     * cannot access getChildAClassName() function in ChildA class
     * */
    Parent newParent = new ChildA();

    newParent.getClassNamePub();
    System.out.println("childA is instance of ChildA=" + (childA instanceof ChildA));
    System.out.println("childA is instance of Parent=" + (childA instanceof Parent));
    System.out.println("parent is instance of Parent=" + (parent instanceof Parent));
    System.out.println("parent is instance of ChildA=" + (parent instanceof ChildA));
    System.out.println("newParent is instance of ChildA =" + (newParent instanceof ChildA));
    System.out.println("newParent is instance of Parent = " + (newParent instanceof Parent));
    
    ChildB childB = new ChildB();
    Parent new2Parent = childB;
    /* runtime excption as compile time it seems ok as it is casted
       but childB is not childA
    */
    //ChildA cA = (ChildA) new2Parent;
    
}
	
	
	
}
