package project.familytree;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;

public class BuildFamilyTree {
	
    
	public NameHashList allNameList ;
	
	public BuildFamilyTree(NameHashList allNameList) {
		this.allNameList = allNameList;
	}
	
    public NameHashList buildFamilyTree(String familyFile) throws Exception{
              BufferedReader reader;
    	try{
    		reader = new BufferedReader(new FileReader(familyFile));
    	
    	String line = reader.readLine();
    	while(line != null) {
    		//System.out.println(line);
    		this.createFamilyTree(line);
    		line = reader.readLine();
    		
    	}
    	reader.close();
    	}catch(IOException e) {
    	e.printStackTrace();
    }
    	return this.allNameList;
    }
    
    public void createFamilyTree(String line) {
        String[] family = line.trim().split("\\s+");
        //System.out.println(Arrays.toString(family));
        
        String husband = family[0];
        String wife = family[1];
        String[] childArr = Arrays.copyOfRange(family, 2, family.length);
        
        this.addMemberInHash(husband);
        this.updateGender(husband, "M");
        this.addMemberInHash(wife);
        this.updateGender(wife, "W");
        this.addChild(husband,wife,childArr);
        this.addChild(wife,husband,childArr);
        
        for(String childName: childArr) {
        	this.createChildMemeberHash(husband,wife,childName);
        }
        
    }
    
    public void createChildMemeberHash(String father , String mother ,String childName) {
    	HumanEntity he = new HumanEntity();
    	he.setName(childName);
    	he.setFather(father);
    	he.setMother(mother);
    	this.allNameList.memberList.put(childName, he);	
    }
    
    public void updateGender(String name,String gender) {
    	HumanEntity he = this.allNameList.memberList.get(name);
    	he.setGender(gender);
    }
    
    public void addMemberInHash(String name ) {
    	boolean isExist = true;
    	try {
    	isExist = this.allNameList.memberList.containsKey(name);
    	}catch (Exception e) {
			e.printStackTrace();
		}
		
    	if(!isExist) {
    		HumanEntity he = new HumanEntity();
        	he.setName(name);
        	this.allNameList.memberList.put(name, he);
    	}
    }
    
    public void addChild(String firstPartner , String secPartner,String[] childArr) {
    	HumanEntity he = this.allNameList.memberList.get(firstPartner);
    	he.relation.put(secPartner,childArr);
    }
    
}
