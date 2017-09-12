#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& arr) {
        stack<int>s;
        int maxArea =-1;
        int area = -1;
        int len = arr.size();
        for(int i =0 ; i <len ; i++){
            
            if( !s.empty() && arr[s.top()] > arr[i]){
                while( !s.empty() || arr[s.top()] > arr[i] ){
                    
                      int topIndex = s.top();
                    s.pop();
                     int index = s.top();
                     area =-1;
                    if(s.empty()) index =-1;
                    area =  (i-index-1)*arr[topIndex];
                    if(area > maxArea){
                        maxArea = area;
                    }
                    
                    if(s.empty()){ 
                        break;
                    }
                }
                
            }
                s.push(i);
            }
            
            
            
        
       int highestIndex = s.top(); 
        while(!s.empty()){
   s.pop();
            int index = s.top();         
int leftIndex;

if(s.empty()){
leftIndex =-1;
}else {
leftIndex = s.top();
}
            area =  (highestIndex -leftIndex)* arr[leftIndex];
            maxArea = max(maxArea ,area);
        //    s.pop();
        }
        return maxArea;
        
        
    }
};

int main(){

Solution sol;
int arr[] = {1,2,3};
vector<int> v(arr ,arr+ sizeof(arr)/sizeof(arr[0]));

cout<<"\nSolution ="<<sol.maxArea(v)<<endl;

}




