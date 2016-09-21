#include<stdio.h>
#include<iostream.h>
int main()
{
    long long unsigned t,k;
    scanf("%llu",&t);
    while(t--)
    {
    scanf("%llu",&k);
     
    printf("%llu\n",(k-1)*250+192);
}
    system("pause");
    return 0;
}
