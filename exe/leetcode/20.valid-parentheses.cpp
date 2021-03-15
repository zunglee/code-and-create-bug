#include<iostream>
#include<stack>
using namespace std;

class Solution{
	public:
		bool isValid(string s) {
			stack<char>stack;
			int len = s.length();
			for(int i=0 ; i < len ; i++){
				if(isOpeningBracket(s[i])){
					stack.push(s[i]);
				}else{
					if(  !stack.empty() && checkBrackMatch(stack.top() , s[i])){
						stack.pop();
					}else{
						return false;
					}

				}

			}

			return stack.empty();
		}
		bool checkBrackMatch(char open , char close){
			if( (open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']')    ){
				return true;
			}
			return false;


		}

		bool isOpeningBracket(char c){
			if(c == '(' || c == '{' ||c == '[' ){
				return true;
			}
			return false;
		}


};
int main(){
	string str ="()[]{(]";
	Solution s;
	cout<<s.isValid(str);
	return 1;
}
