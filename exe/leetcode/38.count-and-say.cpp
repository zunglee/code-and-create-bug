#include<iostream>
#include<string>
#include <cstdlib>
#include <sstream>
using namespace std;
class Solution {
	public:
		string countAndSay(int n) {
			string ans = "";
			if(n == 0 ){
				return ans;
			}
			ans = "1";
			if(n ==1){
				return ans;
			}
			for(int i =2 ; i<=n ; i++){
				ans = createPattern(ans);
			}
			return ans;
		}

		string createPattern(string str){
			string ans = "";
			int i = 0;
			int len = str.length();
			char ch ;
			int ct;
			while(i<len){
				ct = 0 ;
				int j = i;
				ch = str[i];
				while( i<len && str[i] == ch ){
					ct++; i++;
				}
stringstream ss ;
ss<<ct;				
ans = ans+  ss.str()+ch;
			}

			return ans;
		}



};




int main(){
int n = 5;
	Solution s;
cout<<s.countAndSay(n);
	return 1;
}
