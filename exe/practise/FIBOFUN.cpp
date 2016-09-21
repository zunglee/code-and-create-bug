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
       long long int a,b,n,m,d,c,sum;
       scanf("%lld%lld%lld%lld",&a,&b,&n,&m);
      int i=3;
       sum=a+b;
      sum=sum%m;
    while(i<=n)
       {
               i++;
          d=b;
          b=b+a;
          a=d;
          sum=(sum+b)%m;
          }
          if(n==1)
          printf("%lld\n",a%m);
          else
          printf("%lld\n",sum);
          }
          getch();
          return 0;
}
