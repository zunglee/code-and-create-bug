#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    float t;
    
    while(scanf("%f",&t)&& t!=0.0)
    {
              int flag=0,i=2;
              float sum=0.0;
              while(sum<=t)
              {
                           sum=sum+1.0/i;
                           ++i;
                           ++flag;
                           }
              printf("%d card(s)\n",flag);
    }
    getch();
    return 0;
}
