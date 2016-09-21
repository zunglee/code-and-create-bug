package main;

/*
Changes Required

 1.) Make a Output to user in console as this will changes to this
 if user agress to proceed  then Save the old-name in a
 txt file as a map new name  - old name and renamethe files
 2.)make it generic , if path given then take dat else take the default location 

*/
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class RenamingFileInFolder {

public static int ct=0;
	
	public  void renamingFile(String path) throws IOException{
	
	File dir = new File(path);
	//contains all files within the folder dir as e.g files[i]=E:\pixpux\xxx.jpg
	File[] files = dir.listFiles();
	int num=0;
	
	File txtFileMap = new File(path+"\\Map.txt");
	
	if(!txtFileMap.exists()){
		// create txt file if not exist
		txtFileMap.createNewFile();
	}
	FileWriter fw = new FileWriter (txtFileMap.getAbsoluteFile());
	BufferedWriter bw = new BufferedWriter (fw);
	// iterate till last element
	for(int i=0 ; i< files.length;i++)
	{
		ct++;
		/*
		continue if it is file otherwise if it is directory 
		recursively call the function
		*/
		
		if(files[i].isFile()){
		String s= files[i].getName();
		bw.write(Integer.toString(num)+" - "+ s);
		bw.newLine();
		int index = s.lastIndexOf('.');
		String extension = s.substring(index);
		
		if(files[i].renameTo(new File(path+Integer.toString(num)+extension)))
		{ 
			num++;
			System.out.println("Success");
		}
		/*
		if failed to rename (in case that no is present)
		*/
		
		else 
		{
			System.out.println(files[i]+" Failed");
			/*
			try the no till it is renamed
			*/
			while(!files[i].renameTo(new File(path+Integer.toString(num)+extension)))
			{
				num++;
			}
			System.out.println("---> resolved at "+num);
		}
	} 
		/*
		recursively call the function with path as dat of folder
		*/
		else this.renamingFile(files[i]+"\\");
	}
bw.close();
fw.close();
}
	public static void main (String[] args) throws IOException
	{
		// path of folder     ,  ALso add \\ after ending of path
	    String path  = "C:\\Games\\pixpux\\";
	    
	    // making the object of class as this method is static
	    RenamingFileInFolder obj = new RenamingFileInFolder();
	    
	    // calling the function renamingFile
	    obj.renamingFile(path);
	    
	    // no of files changed
	    System.out.println(ct);
			}
}
