
#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
   string longestPalindrome(string s) {
        int len = s.length();
        int maxi =0;
        int ct=0;
        int mxCt = 1;    
       string mxPalinStr = s.substr(0, mxCt);
        pair <int , int> p;
        for(int i=1; i<len;i++){
            p=getLength(s,i);
            ct = p.second - p.first+1 ;
            if(ct > mxCt){
                mxCt = ct;
                mxPalinStr = s.substr(p.first, mxCt);
            }
            
        }


        return mxPalinStr;
    }
    
    pair<int , int> getLength(string s , int index){
        int l = index-1;
        int r = index+1;
        int len = s.length();
        int ct=1;
        int start =index;
        int end = index;
        int start2 = index;
        int end2 = index;
        int ct2 = 0;
        while(l>=0 && r<len && s[l] == s[r]){
            start = l;
            end = r;
            ct++;
            l--;r++;
        }


        
        if(s[index] == s[index-1]){
            l = index-2;
            r= index+1;
            start2 = index-1;
             end2 = index;
             ct2 = 2;  
            while(l>=0 && r<len && s[l] == s[r]){
                start2 = l;
                end2 = r;
                l--;r++;
            ct2++;
        }   
        }
       cout<<endl<<" start="<<start<<" end="<<end<<" start2="<<start2<<" end2="<<end2<<endl; 
        pair<int,int> p;
        if ( ct2 > ct ){
            p.first = start2;
            p.second =    end2;
        }else{
            p.first = start;
            p.second = end;
        }
        
        return p;
        
    }

    
};


int main(){

string s ="cccccccccc";

Solution sol ;

cout<<endl<<sol.longestPalindrome(s)<<endl;


return 0;

}
