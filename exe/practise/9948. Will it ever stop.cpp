#include<iostream.h>
#include<stdio.h>
int main()
{
    long long int n;
     scanf("%lld",&n);
     if(((n&(~n+1))==n)|| (n<1))
     printf("TAK");
     else printf("NIE");
     system("pause");
    return 0;
}
