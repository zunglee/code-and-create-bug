#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
long long int num,n,m, i;

 main()
{ 
cin>>n>>m;

for(num=n;num<m;num++)
{
i=2;
while(i<=num-1)
{
if(num%i==0)
{
break;
}
i++;
}
if (i==num)
{
printf("%lld\n",num);
}
}
getch();
}
