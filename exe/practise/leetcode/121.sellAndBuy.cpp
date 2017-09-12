#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& p) {

        
        int len = p.size();
        int i=0;
        int ans =0;
        int b=0;
        int s =0;
        
        int *temp1 = new int[len];
        int *temp2 =new int[len];
        
        i=1;
        temp1[0] = p[0];
        while(i<len){
        i++;
        temp1[i] = p[i] < temp1[i-1] ? p[i] : temp1[i-1];
        
        }
        
        
        i=len-1;
        temp1[i] = p[1];
        while(i>=0){
        i--;
        temp1[i] = p[i] > temp1[i+1] ? p[i] : temp1[i-1];
        
        }
        
        
        i=0;
        
        while(i<len){
        ans = max(ans , temp2[i]-temp1[i]);
            i++;
        }
        
    delete[] temp1;
   delete[] temp2;
        
        /*
        while(i<len){
            b=-1;s=-1;
            //buy
            while(i+1 < len && p[i] > p[i+1]){
                i++;
            }
            b = i;
//cout<<"b="<<i<< " ";
            i++;
            
            //sell
            while(i+1 < len && p[i] < p[i+1]){
                i++;
            }
//cout<<"s="<<i<<" \n";
if(i< len){       
     s=i;
  }       
            if( (b !=-1 || s!=-1) &&(p[s]>p[b])){
            ans += p[s] - p[b];
            }
            i++;
        }
        */
        
        return ans;
    }
};




int main(){

int arr[] = {7, 1, 5, 3, 6, 4};
vector<int>v(arr , arr+ sizeof(arr)/sizeof(arr[0]));
Solution s;
cout<<endl<<s.maxProfit(v)<<endl;

}
