#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution{
	public:
		bool isPalindrome(int x) {
			//	return x == reverseNum(x) ; // fails at max range	
			vector<int> v = splitNum(x);
			int i=0;
			int j = v.size()-1;
			while(i<j){
				if(v[i] !=v[j]){
					return false;
				}
				i++;j--;
				return true;
			}	
		}

		vector<int> splitNum(int x){
			vector<int> num;
			while(x){
				int rem = x%10;
				num.push_back(rem);	
				x/=10;	
			}
			return num;
		}

		int reverseNum(int x){
			int reversedNum = 0;
			int rem = 0;  
			int const10 = 10;
			while(x){
				rem = x%const10;
				reversedNum =  reversedNum*10+rem;
				x= x/const10;

			}

			return reversedNum;
		}
};


int main(){
	//	int arr[] = {};
	//	vector<int> v (arr , arr+sizeof(arr)/sizeof(arr[0]));
	int num = 2147483647;  // this is max value of int  
	Solution s;
	cout<<s.isPalindrome(num);
	return 1;
}
