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
#define sllu(x) scanf("%llu",&x) //long long int
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

void calVaildInValid(int len){

if(len%2 == 0){
cout<<"no\n";return;
}
int x;
int intArr[(len/2)-1];
int flag = 1; //1 valid
int ct = 0;
for(int i=0 ; i<len ; i++){

cin>>x;
if(i ==0 && x!=1){
flag =0 ;
}

    if(i <= len/2){
    //cout<<"\ndone\n";
          intArr[i] = x;
          if((ct+1) == x){
    //cout <<"\nhere yo yo\n";
           flag = 0;
          }
            ct = x;
    }else{
       if(intArr[len-i-1] != x){
           flag = 0;
    //cout <<"\nafasdf\n";
       }
    }
}

if(flag){
cout<<"yes\n";
}else{
cout<<"no\n";
}

}

int main() {
int t ;
int len;
cin>>t;
while(t--){
cin>>len;
calVaildInValid(len);
}

	return 0;
}
