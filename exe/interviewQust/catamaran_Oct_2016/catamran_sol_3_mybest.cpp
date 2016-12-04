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
   string result="";
   long long unsigned ct = 0 , temp = num;
   float f = 0.0;
   long long unsigned currDeno =-1;
   long long unsigned currNumo =0;

    while(ct < temp ){
//cout<<"\nnum="<<num<<" "<<"deno="<<deno<<endl;
   f = deno/(num*1.0);
//cout<<"value of f="<<f<<endl;
   if( (int)f == f  && (int)f%2 ==1){
   result += "1/"+ to_string(f)+" + ";
   break;
   //even

cout<<(int)f;
break;
   if((int)f%2 ==0){
       currDeno = (int)f+1;
   }
     }else{
       currDeno = (int)f;
     }

   cout<<"currDeno"<<currDeno<<endl;
   //cout<<"current Denominator = "<<currDeno<<endl;
   result += "1/"+ to_string(currDeno)+" + ";
   num = num*currDeno-deno;
   deno = deno*currDeno;
   ct++;

}

if(ct >= temp)cout <<"NOT POSSIBLE";
else cout<<result;
}


main(){

long long unsigned num , deno ;

  while(1){
   sllu(num);
   sllu(deno);
   printTheSeries(num , deno);
}
}

