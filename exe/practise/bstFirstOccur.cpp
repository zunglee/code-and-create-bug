//author Ankitesh kushwaha
#include<iostream>
using namespace std;

int bstFirst(int a[] , int l , int r , int key){


if(l>r){
return -1;
}


int m = (l+r)/2;
if( (a[m]==key && (m==0 || a[m-1]< key ))){
return m;
}else if( a[m] < key){

return bstFirst(a,m+1,r,key);

}else{
return bstFirst(a , l,m-1,key);
}

}


int main(){

int a[]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7};
int k=0 ;
int index = bstFirst(a ,0, sizeof(a)/sizeof(a[0]) ,k );
if(index == -1){
cout<<"NOT FOUND !!!";
}else{
cout<<endl<<index<<endl;
}
}


