#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:




    string addBinary(string a, string b) {
        int lena = a.length();
        int lenb = b.length();
    int aa = 0;
        int bb = 0;
        string ans = "";
        lena-- ; lenb--;
        int ct =0;
        while(lena >=0){
         if(a[lena] == '1'){
             aa+= pow(2,ct);
         }   
            lena--;
            ct++;
        
}
cout<<"|a="<<aa;
        ct=0;
         while(lenb>=0){
         if(b[lenb] == '1'){
            bb+= pow(2,ct);
         }   
             lenb--;
            ct++;
        }
        int ansI = aa+bb;
cout<<"|ansI"<<ansI<<endl;     
   int remain = 0;
        
        while(ansI>0){
        remain = ansI%2;
            if(remain == 1){
            ans = "1"+ans;
            }else{
                ans = "0"+ans;
            }
            ansI /=2;
        }
        
        return ans;
    }
 string addBinary1(string a, string b) {
        int lena = a.length();
        int lenb = b.length();
        string ans = "";
        lena-- ; lenb--;
        int aa , bb , carry , sum;
        while(lena >=0 || lenb >=0){
           aa = lena>=0 ? (a[lena] == '1' ? 1:0) : 0 ;
           bb = lenb>=0 ? (b[lenb] == '1' ? 1 : 0) : 0 ;
           sum = aa+bb+carry;
           switch(sum){
               case 0 : carry = 0; ans = "0"+ans; break;   
               case 1 : carry = 0; ans = "1"+ans; break;
               case 2 : carry = 1; ans = "0"+ans; break;
               case 3 : carry = 1; ans = "1"+ans; break;
           }
            lena--;lenb--;
        }
        if(carry == 1){
            ans =  "1" + ans;
        }
        
       cout<<"YES"; 
        return ans;
    }

};


int main(){
Solution s;
string s11="1010", s1 = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
string s22="1011",s2 = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
cout<<s.addBinary1(s11 , s22);
return 1;
}

