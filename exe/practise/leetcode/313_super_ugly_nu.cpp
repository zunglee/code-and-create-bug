#include<iostream>
#include <vector>
#include <map>
#include<limits.h>
using namespace std;
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& p) {
        int len = p.size();
        int *arr = new int[n];
        int prod =0;
        int minProd =0;
        arr[0] =1;
        map<int,int> m;
        for(int i=0; i<len;i++){
               m[p[i]] =0; 
           }
        for(int k=1 ;k<n;k++){
            
            minProd = 2147483647;
            
           for(int i=0; i<len;i++){
               prod = p[i] * arr[m[p[i]]];
//        cout<<prod<<endl;      
 if(prod <minProd){
                   minProd =prod;   
               }

           }
//cout<< minProd<<endl;
//return 0;            
            for(int i=0; i<len;i++){
            
            if(minProd%p[i] ==0){
                m[p[i]] =  m[p[i]]+1;
            }
            }
            arr[k] = minProd;
            
        }
/*        
for(int k=0 ;k<n;k++){
cout<< arr[k]<<endl;

} 
*/
       
        return arr[n-1];
        
    }
};

int main(){

Solution sol;

int arr[] = {2,3,5};
int k = 111;
vector<int> v(arr, arr+sizeof(arr)/sizeof(arr[0]));


cout<<sol.nthSuperUglyNumber(k,v);


}


