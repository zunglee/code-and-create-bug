#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
class Solution{

	public:
		int reverse(int x) {
			vector<int> v = splitNum(x);
			for(int i=0; i< v.size(); ++i)
				cout <<  v[i] << ' ';

			return 1;

			int ans =0;
			for(int i=0;i< v.size(); i++){

				if((unsigned long)ans*10 > INT_MAX){
					ans = 0 ;
					break;
				}			
				ans = ans*10+v[i] ;
			}
			return x < 0 ? ans*-1 : ans;    
		}

		vector<int> splitNum(int n){

			vector<int> v;
			int rem = 0;
			while(n){
				rem = n%10 ;
				rem = rem<0 ? rem*-1 : rem;
				v.push_back(rem);
				n/=10;

			}

			return v;
		}

		//1534236469


};

int main(){
	int num = -2147483648;
	Solution s;
	cout<<s.reverse(num);
	return 1;
}




