#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#define sc(x) scanf("%c",&x) //char
#define si(x) scanf("%d",&x) //int
#define sf(x) scanf("%f",&x) //float
#define sl(x) scanf("%I64d",&x) //int64_
#define sd(x) scanf("%lf",&x) //double
#define sld(x) scanf("%Lf",&x) //long double
#define slld(x) scanf("%lld",&x) //long long int
#define sllu(x) scanf("%llu",&x) //long long unsigned
#define ss(x) scanf("%s",x) // string

#define pc(x) printf("%c",x)
#define pi(x) printf("%d ",x)
#define pf(x) printf("%f ",x)
#define pl(x) printf("%I64d ",x)
#define pd(x) printf("%lf ",x)
#define pld(x) printf("%Lf ",x)
#define plldn(x) printf("%lldn", x);
#define ps(x) printf("%s", x);

#define pin(x) printf("%d\n",x)
#define pln(x) printf("%I64d\n",x)
#define pfn(x) printf("%f\n",x)
#define pdn(x) printf("%lf\n",x)
#define pldn(x) printf("%Lf\n",x)
#define plld(x) printf("%lld\n", x);
#define pllu(x) printf("%llu\n", x);
#define psn(x) printf("%s\n",x)

#define pn() printf("\n")
#define _p() printf(" ")

int binarySearch(long long int *arrSnakeLen ,int arrLen ,long long int maxLen){
int i=0;
int j = arrLen-1;
int mid = (i+j)/2;
while(i<j){

if((i+1) == j){
if(arrSnakeLen[i] < maxLen){
return j;
}else{
return i;
}
}

if(mid == 0){
break;
}
    if(arrSnakeLen[mid-1] < maxLen && (arrSnakeLen[mid] == maxLen || arrSnakeLen[mid] > maxLen)){
      return mid;
    }else if(arrSnakeLen[mid] < maxLen){
           i= mid+1;
    }else if(arrSnakeLen[mid] > maxLen){
           j= mid-1;
    }
mid = (i+j)/2;
}
return mid;
}


void calSnakeEatMaxLen(int n, int q){

long long int arrSnakeLen[n];
long long int maxLen;
long long int ct=0 , temp;
int index;
int i , j;

for(int i =0 ;i <n ;i++){
slld(arrSnakeLen[i]);
}

sort(arrSnakeLen ,arrSnakeLen+n);

for(int x =0 ;x <q ;x++){

slld(maxLen);
index = binarySearch(arrSnakeLen , n,maxLen);
if(index == (n-1)){
   if(arrSnakeLen[index] >= maxLen){
   ct =1;
   }
}else if( index == 0){
if(arrSnakeLen[index] >= maxLen){
   ct =n;
   }
}else{
ct = n - index;
}


i=0;
j = index-1;
while(i<j){
temp = maxLen - arrSnakeLen[j] ;

    if((i+temp) < j ){
    ct = ct+temp;
    j--;
    i = i+temp;
    }else{
    break;
    }

}
plld(ct);

}


}


int main() {
int t ;
int n , q;
si(t);
while(t--){
si(n);
si(q);
calSnakeEatMaxLen(n,q);
}
	return 0;
}
