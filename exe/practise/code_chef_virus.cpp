#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

main()
{
long long unsigned t,x,y;
scanf("%llu",&t);
while(t--)
{
        scanf("%llu%llu",&x,&y);
        if(x==0 || y==0)
        {printf("0\n");
        continue ;
        }
       x=x/2;
       y=y/2;
       x=x+y+1;
       printf("%llu\n",x);
       }

}
