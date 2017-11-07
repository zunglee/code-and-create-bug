#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
       
        int len = nums.size();
        
        switch(len){
                case 0 : return 0 ;break;
                case 1 : return nums[0] ;break;
            case 2 : return nums[0]>nums[1] ? nums[0]:nums[1];break;                
        }
        
        
        int *dp = new int[len];
        dp[0] = nums[0];
        dp[1] = nums[0] > nums[1] ? nums[0] : nums[1];
        for(int i = 2 ;i<len;i++){
            dp[i] = (dp[i-2]+nums[i]) > dp[i-1] ? dp[i-2]+nums[i] : dp[i-1];
        }


        delete[] dp;
        int ans = dp[len-1];
        return ans;
    }
};



void func(int n){


int *dp  = new int[n];

}


int main(){
Solution sol;
int arr[] = {183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211};
vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));


sol.rob(v);

}




