#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
long long unsigned i=0,n,t,sum=0, m=1000000003;
while(1)
{
cin>>n;
sum=i=0;
while(n)
{
           sum=sum+ (n*n*(n+1)*(n+1))/4;
          // cout<<i<<" "<<sum<<endl;
           sum=sum%m;
          
          n--;
          }
cout<<sum%m<<endl;
}
getch();
}
