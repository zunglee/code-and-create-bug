#include<iostream>
using namespace std;

class Solution{

	public:
		int romanToInt(string s) {
			int ans = 0;
			int len = s.length();
			int num = 0;
			bool flag = false;			
			for(int i=0; i< len ; i++){
				switch(s[i]){
					case 'I' :
						if(i<len-1){ 
							if(s[i+1]=='V'){
								i++;
								num = 4;
								flag = true;
							}else if(s[i+1] == 'X'){
								num= 9;i++; flag = true;
							} 
						}
						if(!flag){
							num = 1;
						}
						break;
					case 'V' :
						num = 5;break;
					case 'X' :
						if(i<len-1){
							if(s[i+1]=='L'){
								i++;
								num = 40;
								flag = true;
							}else if(s[i+1] == 'C'){
								num= 90;i++; flag = true;
							}
						}
						if(!flag){
							num = 10;
						} 
						break;

					case 'L' :
						num = 50;break;
					case 'C' :
						if(i<len-1){
							if(s[i+1]=='D'){
								i++;
								num = 400;
								flag = true;
							}else if(s[i+1] == 'M'){
								num= 900;i++; flag = true;
							}
						}
						if(!flag){
							num = 100;
						}
						break;

					case 'D' :
						num = 500; break;
					case 'M' :
						num = 1000;break;

				}
				flag = false;

				ans +=num;
			}


			return ans;        
		}

};

int main(){
	string str = "MCMXCIV";
	Solution s;
	cout<<s.romanToInt(str);
	return 1;
}

