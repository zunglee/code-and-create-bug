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
#define MOD 1000000007

 long long int sum=0,s=1;
main()
{
      int t,n,k;
//cin>>t;
//while(t--)
{
            si(n);
            si(k);
            int p=n-1;
          for(int i=0;i<(p-1);i++)
          {
                  s=s*(k-1);
                  s=s%MOD;
            }  
         s=s*k;
         s=s%MOD;
         sum=s;
         s=1;
         int messi;
         if(p%2==1)
         messi=(p-1)/2;
         else
         messi=(p-2)/2;
         for(int i=1;i<=messi;i++)
         {
                 for(int j=0;j<=i;j++)
                 {
                         s=s*k;
                         s=s%MOD;
                         }
                     int a=n-2-(2*i); 
         for(int i=0;i<(p-1);i++)
          {
                  s=s*(k-1);
                  s=s%MOD;
            } 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 }
         
         
          }


}
