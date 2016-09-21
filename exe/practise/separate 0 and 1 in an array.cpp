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
main()
{
  //    int t;
//cin>>t;
while(1)
{
int n,ptr0=0,ptr1=999999,flag=0;
si(n);
int a[n];
for(int i=0;i<n;i++)
si(a[i]);
for(int i=0;i<n;i++)
{
        if(flag==0)
        {
                  if(a[i]==1)
                  {
                             ptr1=i;
                             flag=1;} 
                   }
        if(a[i]==0)
        {
                   if(ptr1<i)
                   {
                             
                             a[ptr1]=0;
                             a[i]=1;
                              ptr1++;  
                                }
        }
        }
          
       for(int i=0;i<n;i++)
       pi(a[i]);cout<<endl;   }

system("pause");
}
