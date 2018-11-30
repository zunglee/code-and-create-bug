package project.familytree;

import java.util.HashMap;
import java.util.List;

public class HumanEntity {
	
	public String Name;
	public String gender;
	public String father;
	public String mother;
	public HashMap<String,String[]> relation;
	
	public HumanEntity() {
		this.relation = new HashMap<>();
	}
	
	public void setRelation(HashMap<String, String[]> relation) {
		this.relation = relation;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		this.Name = name;
	}
	public String getGender() {
		return gender;
	}
	
	public void setGender(String gender) {
		this.gender = gender;
	}
	public String getFather() {
		return father;
	}
	public void setFather(String father) {
		this.father = father;
	}
	public String getMother() {
		return mother;
	}
	public void setMother(String mother) {
		this.mother = mother;
	}

	

}
