
//author Ankitesh kushwaha
#include<iostream>
using namespace std;

int bstCeil(int a[] , int n , int key){

int l = 0; int r = n; 

if(n == 0 || n ==1){
return 0;
}

if(n == 2){ return a[0] <= key ? 0 : 1;
}

if(key < a[0]) return 0;
//if(key > a[n-1]) return n-1;


cout<<"*********\n";

int mid = (l+r)/2;

while( r-l > 1){
 mid = l+(r-l)/2;

cout << l<<endl;
 if( a[mid] <= key){
   l = mid;
}else{
   r= mid;
}

}
cout<<"*********\n";
cout<< l;

return l;
}


int main(){

int a[]={1,2,3,5,6,8,9,10};
int k=100 ;
int index = bstCeil(a , sizeof(a)/sizeof(a[0]) ,k );
cout<<endl<<a[index]<<endl;

}





