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

void printTheSeries(long long unsigned num , long long unsigned deno){

   long long unsigned ct = 0 , temp = num;
   float f = 0;
   long long unsigned nextDeno =-1;
   long long unsigned nextNumo =0;

    while(ct < temp && f !=nextDeno ){

   f = deno/(num*1.0);

if ((int)f == f){
   cout<<"1/"<<f;break;
}
   //even
   if((int)f%2 ==0){
       nextDeno = (int)f+1;
   }else nextDeno = (int)f+2;

num = num*nextDeno-deno;
deno = deno*nextDeno;
ct++;
    cout<<"1/"<<nextDeno<<" + ";
//cout<<"num "<<num<<" deno = "<<deno<<endl;
}

if(ct > temp)cout <<"NOT POSSIBLE";

}


main(){

long long unsigned num , deno ;
  while(1){
   sllu(num);
   sllu(deno);
   printTheSeries(num , deno);
}
}

