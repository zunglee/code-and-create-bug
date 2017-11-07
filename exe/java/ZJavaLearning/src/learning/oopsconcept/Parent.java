package learning.oopsconcept;

public class Parent {

	private String classNamePriv = "ParentClass Private Member";
	protected String classNamePro = "ParentClass Protected Member";
	public String classNamePub = "ParentClass Public Member";
	
	public Parent(){
		System.out.println("Parent Default Constructor");
	}
	public Parent(int a ,int b){
	  System.out.println("2 Parameter  Constructor -> Parent Class");	
	}
	
	public String getClassNamePub(){
		System.out.println(this.classNamePub);
		return this.classNamePub;
	}
	
	public String getParentClassName(){
		System.out.println("Parent Class");
		return this.classNamePub;
	}
	
	
}
