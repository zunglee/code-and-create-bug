#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class sol {

	public :
 int ct = 0 ;
    set<string> mp;
    vector<string> letterCasePermutation(string S) {
        
        set<string> ans;
        create(S , ans , 0);
vector<string> an(ans.begin() , ans.end());
       cout<<ct<<"     "<<mp.size()   ;
        return an;
    }
    
    void create(string &s ,set<string> &ans , int index){
      ct++;
        if(index == s.length()){
            ans.insert(s);
        }
        
        
        
        for(int i = index ; i< s.length() ; i++){
            
            bool is = isCharacter(s[i]); 
          
            if(is){
               s[i] = tolower(s[i]);
            }
            if(mp.find(s) == mp.end()){
            create(s , ans , index+1);   
                mp.insert(s);
            }    
            
              if(is){    
            s[i] = toupper(s[i]);
                }
            
            if(mp.find(s) == mp.end()){
            create(s , ans , index+1);    
            }      
            
            
        }
        
        
    }
    
    bool isCharacter( char c){
        if((c >= 'a' && c<='z' ) || (c >= 'A' && c <='Z')) {
           return true; 
        }
        return false;
    }


};

int main(){
	
    clock_t start, end;

    start = clock();
	sol s ;// new sol();
	string input ; 
	cin>> input;
	
	s.letterCasePermutation(input);
end = clock();

    double duration = double(end-start)/CLOCKS_PER_SEC;
    std::cout << "\n duration="<<duration;
	return 0;
}


