#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
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
#define psn(x) printf("%s\n",x)

#define pn() printf("\n")
#define _p() printf(" ")

int minStep(int a , int b, int c){
int ct=0,bucketA=0 , bucketB=0 , waterToBeFilled;

while(bucketA!=c && bucketB!=c)
{
    if(bucketA == 0) bucketA=a;
     else if(bucketB == b) bucketB = 0;
     else {
          waterToBeFilled = min(bucketA , b- bucketB);
          bucketA-=waterToBeFilled;
        bucketB+=waterToBeFilled;
          }
         
    ct++;
    }
return ct;
}
main()
{

int t,a,b,c;
cin>>t;
while(t--){
           cin>>a>>b>>c;
if( (c> max(a,b)) || (c%(__gcd(a,b))!=0))
cout<<"-1\n";
  else cout<<min( minStep(a,b,c) , minStep(b,a,c))<<endl; 
       }
  
//system("pause");
}
