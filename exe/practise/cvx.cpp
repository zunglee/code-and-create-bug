#include<iostream>
#include<stdio.h>
using namespace std;
int rev (int);
int main()
{
    int t;
    scanf("%d",&t);
    int r;
    r=rev(t);
    printf("%d",r);
    system("Pause");
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

    
