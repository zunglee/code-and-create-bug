#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
 
main()
{
int t,len,n=0;
cin>>t;
while(t--)
{
cin>>len;
char stg[len],build[len];
memset(build,0,len);
scanf("%d",&stg);
printf("%d",stg[1]);
n=0;
if(stg[0]=='1')
build[0]=build[1]='1';
if(stg[len-1]=='1')
build[len-1]=build[len-2]='1';
for(int i=1;i<(len-1);i++)
{
        
        if(stg[i]=='1')
build[i-1]=build[i]=build[i+1]='1';
}
 


for(int i=0;i<len;i++)
{
        if(build[i]!='1')
       n++;
                      
        }
printf("%d\n",n);
}

 
}
