#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{

	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			vector<int> ans;
			map<int , int> m;
			int num2;
			map<int , int>::iterator it;
			for(int i=0;i<nums.size();i++){
				num2 = target - nums[i];
				it = m.find(num2);
				if(it != m.end()){
					ans.push_back(it->second);
					ans.push_back(i);
					break;
				}else{
					m.insert(pair<int , int>(nums[i] , i));
				}

			}
			printVectorvalue(ans);
			return ans;

		}
		void printVectorvalue(vector<int> v){
			cout<<"going to print result"<<endl;
			for(int i =0 ; i < v.size(); i++){
				cout<<"value at" << i <<" ["<<v[i]<<"]"<<endl;
			}
		}


};




int main(){
	int array[] = {1,2,3,4,5,6,7,8,9};
	vector<int> arr(array , array+sizeof(array)/sizeof(array[0])) ;
	int target = 14;
	Solution s ;
	s.twoSum(arr , target);
	return 1;

}


