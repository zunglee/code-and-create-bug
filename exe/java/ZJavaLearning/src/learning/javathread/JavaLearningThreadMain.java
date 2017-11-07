package learning.javathread;

public class JavaLearningThreadMain {
	
	public static void main(String[] args){
		Thread t1 = new Thread(new ThreadRunnable(),"t1");
		Thread t2 = new Thread(new ThreadRunnable(),"t2");
		
		System.out.println("Show begins !!!!");
		t1.start();
		t2.start();
		System.out.println(" Runnable Threads Started !!!");
		Thread t3 = new JavaThread("t3");
		Thread t4 = new JavaThread("t4");
		System.out.println(" Starting Java Clas thread ");
		t3.start();
		t4.start();
		System.out.println("Java Class Thread started");
	}
	
	
	  
}
