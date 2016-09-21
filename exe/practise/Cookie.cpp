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
             long long int n,a,d,sum;
              scanf("%lld%lld%lld",&n,&a,&d);
              sum= (n*(2*a+(n-1)*d))/2;
              printf("%lld\n",sum);
              }
              getch();
              return 0;
}
