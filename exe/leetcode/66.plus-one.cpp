#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
		vector<int> plusOne(vector<int>& digits) {
			int len = digits.size();
			if(len < 1){
				return digits;
			}
			int carry = 0;
			for(int i = len -1 ; i>=0 ; i--){
cout<<"digit"<<digits[i];
				if(i == len-1){

					digits[i] = digits[i]+ carry+1; 
				}else{
					digits[i] = digits[i]+ carry;
				}
cout<<" |carry="<<carry<<"|sum"<<(digits[i]);
				carry = digits[i] / 10;
cout<<" |new carry="<<carry;

				digits[i] = digits[i] %10;     

cout<<" |digits="<<digits[i]<<endl;
			}
			if(carry> 0) {digits.insert(digits.begin() , carry);}
 len = digits.size();
for(int i = 0 ; i<len ; i++){
cout<<"|"<<digits[i];

}	


		return digits;
		}
};


int main(){
	int arr[] = {9};
	vector<int> v(arr , arr+sizeof(arr)/sizeof(arr[0]));
	Solution s;
s.plusOne(v);
	return 1;
}
