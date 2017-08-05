//author Ankitesh kushwaha
#include<iostream>
using namespace std;

int bst(int a[] , int n , int key){

int l = 0; int r = n; 

int mid = (l+r)/2;

cout << "********\n";

while( l<=r){
 mid = l+(r-l)/2;

cout<<mid<<endl;
 if( a[mid] == key){
   return mid;
}else if(a[mid] < key){
 l= mid+1;
}else{
   r= mid-1;
}

}
cout<<"*********\n";
return -1;
}


int main(){

int a[]={1,2,3,5,6,8,9,10};
int k=8 ;
int index = bst(a , sizeof(a)/sizeof(a[0]) ,k );

if(index ==-1)
{
cout<<"NOT FOUND !!!! ";
}else{
cout << "found at index = "<<index <<endl;
}

}


