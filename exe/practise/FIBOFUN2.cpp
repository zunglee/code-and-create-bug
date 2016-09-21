#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
               long long int a,b,n,m,d,sum,i;
               scanf("%lld%lld%lld%lld",&a,&b,&n,&m);
               sum=(a+b)%m;
               for(i=3;i<=n;++i)
               {
                                d=b;
                                b=a+b;
                                a=d;
                                sum=(sum+b)%m;
               }
               if(n==1)
               printf("%lld\n",a);
               else if(n==2)
               printf("%lld\n",a+b);
               else
               printf("%lld\n",sum%m);
               }
               getch();
               return 0;
               }
