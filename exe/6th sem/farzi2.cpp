#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
main()
{
int n,g,t;

while(1)
{
             scanf("%d",&n);
scanf("%d",&g);
t=log(n)/(log(g));
t=pow(g,t);
t=n-t;
t=2*t+1;
t=t-n;
printf("%d\n",t);
 
}
}
