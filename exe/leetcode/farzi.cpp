#include<iostream>
#include<vector>
#include <utility>
#include <limits.h>
#include <algorithm>
#include<stack>
#include <time.h>
using namespace std;

class Solution {
public:

vector<int> arr{1,2,3,4};
void printPermutation(){

int start = 0  , end = arr.size()-1;

st(start , end);

}

void st(int start , int end){
if(start <=end){

	for(int i : arr){
		cout<<i<<",";
	}
	cout<<endl;
	return ;
}


while(start <end ){
   swap(arr[start] , arr[end]);
   
   st(start+1,end);
  swap(arr[start] , arr[end]);
start++;
   //  end--;
 //  st(start , end);

}

}




void printA(vector<int> a){
cout<<"\n###############";
	for(int i : a){
	cout<<i<<",";
}
cout<<"\n###############";

}

    



	vector<int> minimumAbsDifference(vector<int>& nums) {
quickSort(0 , nums.size()-1 , nums);      

printA(nums);

return  nums;
    }
    
    void quickSort(int start , int end , vector<int> &nums){
        if(start >= end){
            return;
        }
        int pivot = getPivot(start , end , nums);
	quickSort(start , pivot-1 , nums);
        quickSort(pivot+1 , end , nums);
    }
    
    int getPivot(int start , int end ,  vector<int> &nums){
        int dataIndex = start;

cout<<start<<"-"<<end<<endl;

	while(start <= end){



            while(start <= end && nums[start] <= nums[dataIndex]){
                start++;
            }


            while(start <= end && nums[end] > nums[dataIndex]){
                end--;
            }

if(start <= end){
                swap(nums[start],nums[end]);
                end--;start++;
            }
        }
        swap(nums[end] , nums[dataIndex]);
cout<<"pivot=["<<end<<"]";
	printA(nums);
  
	return end;
        
    }



};



int main(){
	clock_t tStart = clock();
Solution s ;
       	s.printPermutation();
	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
return 0;
}
