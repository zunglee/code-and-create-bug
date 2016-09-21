#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int a,l,sum,n,d,first,i;
              scanf("%lld%lld%lld",&a,&l,&sum);
              n=(2*sum)/(a+l);
              d=(l-a)/(n-5);
              printf("%lld\n",n);
              first=a-2*d;
              printf("%lld ",first);
              for( i=0;i<n;i++)
              {
                   a=first+i*d;
                   printf("%lld ",a);
                   }
              printf("\n");
              
              }
    return 0;
}
