#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int ct = 0 ;

int LIS(int *arr , int len , int ptr , int index){

if (ptr == len) return 1;
ct++;
int maxWithoutConsideringNextElem  = LIS(arr , len , ptr+1 , index);
int maxi = -1 ;

if(arr[ptr] > arr[index]){
     int maxi = LIS(arr , len , ptr+1 , ptr) +1;
return max(maxWithoutConsideringNextElem , maxi);

}else {
int xc = max(maxWithoutConsideringNextElem,LIS(arr , len , index+2 , index+1));
return  xc ;
}
}



int main(){

int len ;
cin>>len;
int arr[len];

for(int i=0 ; i<len ; i++)
cin>>arr[i];
clock_t time;
time = clock();
cout<<endl<<LIS(arr , len , 0 , 0);
 time = clock() - time;
cout<<"recursion call = "<<ct<<endl<<"time taken ="<<((double)time)/CLOCKS_PER_SEC<<endl;

	cout<<"\nrecursion call  =  "<<ct<<endl;
return 0;
}





