#include<iostream>
using namespace std;


void func(){
	long long int x , y;
	cin>>x>>y;

	if(x==0 && y ==1){
		cout<<"YES";
	}else{
		y--;
		x=x-y;
		if(y == x){

			cout<<"YES";

		}else if(y < 0 || x < 0){

			cout<<"NO";
		}else{
			if(x%2 ==1){
				cout<<"NO";                
			}else{
				cout<<"YES";
			}
		}
	}
}
int main(){
	func();
}
