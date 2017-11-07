package learning.oopsconcept;

public class ChildB extends Parent{

	private String classNamePriv = "ChildClassB Private Member";
	protected String classNamePro = "ChildClassB Protected Member";
	public String classNamePub = "ChildClassB Public Member";
	
	public ChildB(){
		System.out.println("ChildB default Constructor");
	}
	
	
	public ChildB(int a ,int b){
		  System.out.println("Constructor -> ChildB Class");	
		}
		

	public String getClassNamePub(){
		System.out.println(this.classNamePub);
		return this.classNamePub;
	}
	
	public String getChildBClassName(){
		System.out.println("ChildB class Function");
		return this.classNamePub;
	}
	
	
}
