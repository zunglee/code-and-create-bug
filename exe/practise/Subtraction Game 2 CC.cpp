#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include <cstdio>
#define MOD 1000000007
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


int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
    
}
main()
{
      int t,n,sub=0,flag=0;
si(t);
while(t--)
{
 si(n);           
 int ct=0;
         long long int a[n],d[n][n];
         for(int i=0;i<n;i++)
         {
                 slld(a[i]);
 
                 }
                 int x=a[0],temp;
                 sort(a,a+n);
                 int nf,f;
                
                for(int i=0;i<n;i++) 
                {
                        f=nf=0;
                for(int j=i+1;j<n;j++) 
                   {
                        
                    temp=gcd(a[i],a[j]);
                    
                    if(temp==1)
                    nf++;
                    else f++;
                    }
                    if((nf+f)!=0)
                    {
                    int sum;
                  sum=pow(2,f);
                            int temp1;
                            temp1=pow(2,nf);
                            --temp1;
                            ct+=temp1*sum;
                            }
                   }  
                printf("%d\n",ct);                 
                 
          }

//system("pause");
}
