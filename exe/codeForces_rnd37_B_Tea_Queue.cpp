#include<iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

void func(){

int noOfStud = 0;
int stTime =0;
int w8 =0;
cin>>noOfStud;
for(int i=0 ; i< noOfStud ; i++){

cin>>stTime>>w8;

if(i==0){
cout<<1<<endl;
continue;

}


   if( abs(i-stTime)<= w8){
  cout<<i-stTime+1<<endl;
}else{
cout<<0<<endl;

}




}




}



int main(){
int t;
cin>>t;
while(t--){
func();

}
return 0;

}
