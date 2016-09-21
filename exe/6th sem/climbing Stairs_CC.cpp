#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
 long long unsigned z[1000000];
main()
{
int t;
scanf("%d",&t);
 long long unsigned n,x=0,y=1,fib=0,g;
            for(int i=0;i<1000000;i++)
            {
             fib=x%1000000007+y%1000000007;
            z[i]=fib%1000000007;
             x=y;
             y=fib;       
             }
while(t--)
{     scanf("%llu%llu",&n,&g);
        {            int a = z[n-1];
       int orig = a;
       long long unsigned count=0,ans=z[n-1];
       /* while(a>0)
        {
            a = a >> 1 << 1;
            if(orig-a==1)
                {
                         count++;
                        
                         };
            orig = a >> 1;
            a = orig;
        }*/
        while(ans)
{count++;
ans=ans&(ans-1);
}
         count=count%1000000007;
         if(count==g)
        printf("CORRECT\n");
        else printf("INCORRECT\n");
         }

//getch();
}
}
