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
              long long int x,y;
              scanf("%lld%lld",&x,&y);
              if(x==y)
              {
                      if(x%2==0)
                      printf("%lld\n",2*x);
                      else
                      printf("%lld\n",2*x-1);
                      }
              else if(x-y==2)
              {
                   if(x%2==0)
                   printf("%lld\n",x+y);
                   else
                   printf("%lld\n",x+y-1);
              }
              else
              printf("No Number\n");
              }
              getch();
              return 0;
      }
