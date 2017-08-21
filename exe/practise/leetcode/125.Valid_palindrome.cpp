#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        bool ans = false;
        
        int st = 0 ,end = s.length();
    
        if(end <=1){
            ans =true;
            return ans;
        }
        end--;
        while(st < end){
            
            while( ! (( s[st] >='a' && s[st]<='z') ||( s[st] >='A' && s[st]<='Z') ||( s[st] >='0' && s[st]<='9'))) {
                st++;
            }
            
            
            while( ! (( s[end] >='a' && s[end]<='z') ||( s[end] >='A' && s[end]<='Z') || ( s[end] >='0' && s[end]<='9'))) {
                end--;
            }
            
            if(st >=end){
                
                    ans=true;
                
              break;  
            }
            
           if( tolower(s[st]) != tolower(s[end])){
                ans= false; break;
            }
            st++;end--;
            ans= true;
            
        }
        
        return ans;
        
        
    }
};





int main(){
Solution sol;

string s[8] = { "0p" ,"a","aa","ab" ,"aba","a b a" ,"ababa ababa","bbbn"};
//string s[][2] = {{"0" , "1"}};

for(int i=0 ; i<8; i++){
cout<<endl<<"string is ------>"<<s[i]<<"<-------\n";
if(sol.isPalindrome(s[i]))
cout<<"\nYES\n";
else cout<<"\nNO\n";

//`<<"\n-----------------------"<<endl;
}



}
