#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int n,sum,m;
              scanf("%lld",&n);
              m=n-1;
              sum=n*n+n+(m*m+m)/2;
              printf("%lld\n",sum%1000007);
              }
              return 0;
}

