#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
long long unsigned c=0,t,n,k,q,i=0;
scanf("%llu",&t);
while(t--)
{
        
scanf("%llu",&q);
int x[q],y[q];
while(i!=q)
{
           
           scanf("%llu%llu",&n,&k);
           y[i]=n;
           x[i]=k;
           i++;
           
           }
            for(int i=0;i<q;i++)
           for(int j=i+1;j<q;j++)   
        {

        if(((y[j]>y[i])&&(x[j]<=x[i]))||((y[j]<y[i])&&(x[j]>=x[i])))
        c++;
        
                   }
           
          printf("%llu\n",c);
          i=0;
          c=0;
}
getch();
}
