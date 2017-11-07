package learning.oopsconcept;

public class ChildA extends Parent{

	private String classNamePriv = "ChildClassA Private Member";
	protected String classNamePro = "ChildClassA Protected Member";
	public String classNamePub = "ChildClassA Public Member";
	
	/*if u are defining constructor in subclass then 
	 * parent class should have default constructor defined
	 * I don't know why ????
	 * */
	public ChildA(){
		System.out.println("ChildA default Constructor");
	}
	
/*If superclass doesn’t have default constructor, then subclass also needs
 *  to have an explicit constructor defined. Else it will throw compile time
 *   exception. In the subclass constructor, call to superclass constructor 
 *   is mandatory in this case and it should be the first statement in the subclass 
 *   constructor.*/
	public ChildA(int a ,int b){
	  System.out.println("2 Parameter Constructor -> ChildA Class");	
	}
	
	
	/*override annotation is added
	 * If not added then it is not treated as overriden function 
	 * and then if parent class function NAME getClassNamePub() changes
	 * it will not throw any error during compilation
	 * */
	@Override
	public String getClassNamePub(){
		System.out.println(this.classNamePub);
		return this.classNamePub;
	}
	
	public String getChildAClassName(){
		System.out.println("ChildA class Function");
		return this.classNamePub;
	}
	
	
}
