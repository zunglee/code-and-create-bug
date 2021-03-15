#include<iostream>
#include<vector>
using namespace std;

class Solution {
	public:
		int searchInsert(vector<int>& nums, int target) {

			return binarySearch(nums, target , 0 , nums.size()-1);


		}

		int binarySearch(vector<int>& nums, int target , int low , int high){
			int mid = (low+high)/2;			
			if(low > high){
				return low;
			}
			if(nums[mid] ==  target){
				return mid;
			}
			if(target < nums[mid]){
				return binarySearch(nums, target , low , mid-1);
			}
			if(target > nums[mid]){
				return binarySearch(nums, target , mid+1 , high);
			}

			return 0;
		}



};

int main(){
	int t = 7;
	int arr[] = {1,3,5,6};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	Solution s;
	cout<<s.searchInsert(v,t);
	return 1;
}
