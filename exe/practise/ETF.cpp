#include<iostream>
#include<stdio.h>
using namespace std;
int gcd (int,int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int i,x,flag=1,res;
              scanf("%d",&x);
              for(i=2;i<x;++i)
              {
                              res=gcd(x,i);
                              if(res==1)
                              flag++;
                              else
                              continue;
                              }
              printf("%d\n",flag);
              }
              return 0;
}
int gcd (int a,int b)
{
    if(b==0 || a%b==0)
    return b;
    else
    return gcd(b,a%b);
}
              
              
