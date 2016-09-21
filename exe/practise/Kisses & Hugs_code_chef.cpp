#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
int t;
long long unsigned j,n,c=1000000007,l,p;
//scanf("%d",&t);
while(1)
{       p=1;
        j=0;
        scanf("%llu",&n); 
       p=pow(2,(n/2));
               if(n%2==0)
               j=p;
              
               p=p%c;
               p=(p-1)*2;
               p=p%c;
               p=p*2;
               p=p%c;
               p=p+2-j;
              printf("%llu\n",p);
        }

getch();
}
