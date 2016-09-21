#include<iostream>
#include <string.h>
using namespace std ;

string printpal(string str){
 int n = str.length();
 int ct = 1 ;
 int x=0, y=0;
 string s ; 
for(int i =0 ; i < n-1 ; i++){
    for(int j=i+1 ; j<n ; j++){
//cout<<str.substr(i,j-i+1)<<endl;
        for(x= i ,y=j ; x<y; x++ ,y--){
               if(str[x] == str[y]){
                 continue; 
                }else break;             
          }
        if(x>y) {
 if(ct < (j-i+1)){
           ct = max(ct , j-i+1);
           s = str.substr(i,ct);
         cout<<"\nPalindrom string = "<<s <<endl;
}
//         return s ;   
}
       }
}

return s;
}



int main(){
string str = "forgeeksskeegfor";

cout<<printpal(str)<<endl;

return 0 ;
}
