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
int arr[10000];
int binary_convertor(int n)
{
                   float y;
                     y=log(n)/log(2)*1.0;
                     int x;
                     x=y;
                     x++;
                     int index;
                     if(y==x)
                     index=x;
                     else
                     index=x-1;
   while(n)
   {
         
        arr[index]=n%2;
           n=n/2;
           index--;
           }                     
                     
                     for(int i=0;i<x;i++)
                     cout<<arr[i];
                   cout<<endl; return 0; }
main()
{
  //    int t;
//cin>>t;
int n;
{while(si(n))     
binary_convertor(n);
}
system("pause");
}
