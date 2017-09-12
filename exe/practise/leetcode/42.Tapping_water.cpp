#include<iostream>
#include<vector>
using namespace std;
void pr(int *, int);
class Solution {
public:
    int trap(vector<int>& ht) {
    
        int len = ht.size();
  
        int  mi[len];
        int ma[len];
           
        mi[0]= ht[0];
        ma[len-1] = ht[len-1];
       
        for(int i=1 ; i <len;i++){
            mi[i] = mi[i-1] > ht[i] ? mi[i-1] : ht[i];
        }
        
        for(int i=len-2 ; i >=0;i--){
          ma[i] = ma[i+1] > ht[i] ? ma[i+1] : ht[i];   
        }
        
        int ans =0;
        for(int i=0 ; i <len;i++){
           ans += min(ma[i] , mi[i])-ht[i];
        }
cout<<endl;
  for(int i=0 ; i <len;i++){
           cout<<ht[i]<<" ";
        }

        pr(mi ,len);
pr(ma,len);
        return ans;
        
        
    }
};
void pr(int *a , int len){
cout<<endl;
for(int i=0 ; i <len;i++){
           cout<<a[i]<<" ";
        }



}



int main(){
int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};

vector<int> v(a,a+ sizeof(a)/sizeof(a[0]));
Solution s;
cout<<s.trap(v);

}


