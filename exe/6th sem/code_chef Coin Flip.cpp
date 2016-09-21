#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
long long unsigned t,n,side,coin,f,ans;
scanf("%llu",&t);
while(t--)
{
scanf("%llu",&n);
while(n--)
{
          scanf("%llu%llu%llu",&side,&coin,&f);
ans=coin/2; 
if((coin%2)==0)
{
      printf("%llu\n",ans);                       
                             }
                             else
                             {
                                 if(f==side)
                                 {
                                            printf("%llu\n",(ans));
                                            }
                                            else
                                            printf("%llu\n",ans+1);              
                             }
                             }
                             }
getch();
}
