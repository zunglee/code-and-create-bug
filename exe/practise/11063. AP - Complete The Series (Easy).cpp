#include<stdio.h>
int main()
{
    long long unsigned a,l,s,n,d,t;
    scanf("%llu",&t);
    while(t--)
    {
    scanf("%llu%llu%llu",&a,&l,&s);
    n=((2*s)/(a+l));
    d=((l-a)/(n-5));
    printf("%llu\n",n);
     
    a=a-2*d;
     //printf("%llu",a);
    while(n--)
    {
            printf("%llu ",a);
            a=a+d;
            }
    printf("\n");
    
}
     
    return 0;
}
