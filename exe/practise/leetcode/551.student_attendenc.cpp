#include<iostream>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        
        int ctA = 0;
        int ctL = 0;
        int i =0;
        int flagLate =0;
        while(i< s.length()){
        switch(s[i++]){
                case 'A':ctA++;
                         if(ctA >1){
                             return false;
                         } flagLate=0;ctL=0;break;
                case 'L': ctL++;
                if(flagLate && ctL>2){
                    return false;
                }else{
                    flagLate =1;
                }
               break;
                default :  flagLate ;ctL=0;
                //case '':break;
                
        }
        }
        
        return true;
    }
};
int main(){


Solution sol;

string s = "PPALLLP";
cout<<endl<<sol.checkRecord(s)<<endl;

}
