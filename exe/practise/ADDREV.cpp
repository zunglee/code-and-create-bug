#include<iostream>
#include<stdio.h>
using namespace std;
int rev (int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int num1,num2,rev1=0,rev2=0,i=0,sum;
              scanf("%d%d",&num1,&num2);
              rev1=rev(num1);
              rev2=rev(num2);
              sum=rev1+rev2;
              rev1=rev(sum);
              printf("%d\n",rev1);
    }
    return 0;
}
int rev (int val)
{
    int sum=0;
    while(val>0)
    {
                 sum=sum*10+val%10;
                 val=val/10;
                 
                 }
    return sum;
}
