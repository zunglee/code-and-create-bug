#include <iostream>
#include <math.h>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#define sc(x) scanf("%c",&x) //char
#define si(x) scanf("%d",&x) //int
#define sf(x) scanf("%f",&x) //float
#define sl(x) scanf("%I64d",&x) //int64_
#define sd(x) scanf("%lf",&x) //double
#define sld(x) scanf("%Lf",&x) //long double
#define slld(x) scanf("%lld",&x) //long long int
#define ss(x) scanf("%s",x) // string
#define sllu(x) scanf("%llu",&x) //long long unsigned

//template<typename T , size_t R , size_t C>
//void printArr(T(&array)[R][C]){
void printArr(int *array ,int R, int C){
for(int i= 0 ; i < R ;i++){
    for(int j=0 ; j<C ; j++){
           cout<<array[i*R + j]<<" ";
}
cout<<endl;
}
}



void pass2Darray(int r ,int c){
int visit[r][c];
int *arr = (int *)malloc(r*c*sizeof(int));

//cout << sizeof(arr);

for(int i= 0 ; i < r ;i++){
    for(int j=0 ; j<c ; j++){
           cout<<arr[i*r+j]<<" ";
}
cout<<endl;
}
printArr(visit , r, c);
}



int main(){


int r ,c ;
int array[r][c];
cin>>r>>c;

pass2Darray(r,c);

return 0 ;
}



