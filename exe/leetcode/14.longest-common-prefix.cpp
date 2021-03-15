#include<iostream>
#include<vector>
using namespace std;
class Solution{


	public:
		string longestCommonPrefix(vector<string>& strs) {
			int len = strs.size();
			string s = "";
			if(len > 0){
				s = strs[0];
			}
			string elem = "";			
			int j = 0;
			int ansLen = s.length();
			int elemLen = 0;
			int size;
			string tempS = "";
			for(int i = 1 ; i < len; i++){
				elem = strs[i];
				elemLen = elem.length();

				size = elemLen > ansLen ? ansLen : elemLen;
				j=0;
				while(j<size){
					if(elem[j]== s[j]){
						//		cout<<"elme velau"<<elem[j]<<"-tempValue-["<<tempS<<"]##\n";
						tempS += elem[j]; 
					}else{
						break;
					}
					j++;
				}
				s = tempS; 
				//cout<<"tempS["<<tempS<<"]"<<" s["<<s<<"]\n";
				tempS = "";	
				if(s.length() == 0){
					break;
				}
			}
			return s;		
		}



};


int main(){

	string arr[] = {"flower","flow","flight" , "tsgrfadss"};
	vector<string> v(arr , arr+ sizeof(arr)/sizeof(arr[0]));
	Solution s;
	cout<<s.longestCommonPrefix(v);

	return 1;
}


