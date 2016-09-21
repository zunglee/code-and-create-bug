#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
     
    while(true)
    {
             int sum;
           scanf("%d",&n);
           if(n==0)
           exit(0);
            sum=(5*((n*(n+1))/2))-(n*n-1);
            printf("%d\n",sum);
            }
            getch();
            return 0;
            }
