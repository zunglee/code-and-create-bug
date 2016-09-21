#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   long long int t,sum;
    while(scanf("%lld",&t) && t!=0)
    {
                       
                         
                         sum=(t*(t+1)*(2*t+1))/6;
                         printf("%lld\n",sum);
                         }
                         return 0;
}
