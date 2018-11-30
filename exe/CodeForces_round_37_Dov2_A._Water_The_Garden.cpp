#include<iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
int func(){
	int result =0;
	int ctGarden = 0;
	int ctTap =0 ;
	int pos =0; 
	cin>> ctGarden>>ctTap;
	int *arr = (int *)malloc(sizeof(int)*ctGarden);       
	for(int x=0 ; x< ctGarden  ; x++){
		arr[x] = -1;
	}  
	for(int i=0 ;i<ctTap;i++){
		cin>>pos;
		arr[pos-1] =1;
	}	    
	bool condition = true;
	//bool change = false;
	for(int x=0 ; x< ctGarden; x++) {
		for(int i = 0 ; i<ctGarden ; i++){
if(arr[i] != -1){
     if(i-1>=0 && arr[i-1] ==-1){
       arr[i-1] = arr[i]+1;
}
    if(i+1<ctGarden   && arr[i+1] == -1){
arr[i+1]  = arr[i]+1;
i++;
}
}
/*
 for(int x=0 ; x< ctGarden  ; x++){
               cout<<arr[x]<< " ";
        }
cout<<endl;
*/
		}
	}
	for(int x=0 ; x< ctGarden  ; x++){
		result = max(result,arr[x]);
	}
	return result;
}
int main(){
	int t ;
	cin>>t;
	while(t--){
		cout<<func()<<endl;
	}
return 0;
}
