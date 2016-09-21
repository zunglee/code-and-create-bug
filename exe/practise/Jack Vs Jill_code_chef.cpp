#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
long long unsigned t,n,k;
scanf("%llu%llu",&n,&k);
int x[k],i=-1;
while(1)
{
        i++;
          scanf("%llu",&t);
          x[i]=t;
          if(i==(k-1))
          {sort(x,x+k);
          break;
          }
          }
          
          n=n-(i+1);
          while(n--)
          {
                     scanf("%llu",&t);
                     if(t==-1)
                     {
                              printf("%d\n",x[k-1]);
                              continue;
                              }
                     if((t<x[k-1]))
                     {
                                   x[k-1]=t;
                                   sort(x,x+k);
                                 }
                    }

getch();
}
