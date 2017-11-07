package learning.javathread;

public class JavaThread extends Thread{
	
	public JavaThread(String name) {
        super(name);
    }

	
	public void run() {
		System.out.println("Runnning "+Thread.currentThread().getName());
		   try {
	            Thread.sleep(1000);
	            //Get database connection, delete unused data from DB
	            doDBProcessing();
	        } catch (InterruptedException e) {
	            e.printStackTrace();
	        }
	        System.out.println("MyThread - END "+Thread.currentThread().getName());
	}
	
	private void doDBProcessing() throws InterruptedException {
        Thread.sleep(5000);
    }
	
	
}
