#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
long long unsigned t,n,k,p;
int flag=0;
scanf("%llu",&t);
while(t--)
{
          flag=0;
          scanf("%llu%llu",&n,&k);
          float d=n/(2*1.0);
if(d!=(int)d)
{
             flag=1;
             }
             else d--;
             
p=pow(10,(int)d);
 
p=p+k-1;
printf("%llu",p);
if(flag==1)
p=p/10;
while(p)
{
        cout<<p%10;
        p=p/10;
        
        }
           
      printf("\n");    
          
          
   }

getch();
}
