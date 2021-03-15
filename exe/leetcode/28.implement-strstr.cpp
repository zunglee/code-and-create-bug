#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
     //time complexity n^2
        
        int index= 0;int j=0;
        int lenHay = haystack.length();
        int lenNeed = needle.length();
        bool flag = false;
        for(int i=0 ; i < lenHay ; i++){
            int temp = i ;
            while(temp < lenHay && j< lenNeed &&  haystack[temp] == needle[j]){
               
 temp++;
                j++;
            }
            if(j == lenNeed){
                return i;
            }
j=0;
        }
        return -1;
        
    }
};


int main(){
string h="hello" , n="ll";
Solution s;
cout<<s.strStr(h , n);
return 1;
}

