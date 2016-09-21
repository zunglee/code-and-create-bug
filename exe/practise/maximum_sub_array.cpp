#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
int a[5],sum_end=0,sum_so=0,t=5,i=0;
while(i<t)
{
          cin>>a[i];
          i++;
          }
           sum_end=0;sum_so=0;
for(i=0;i<5;i++)
{
                  
                 sum_end=sum_end+a[i];
                 if(sum_end<0)
                 sum_end=0;
                 if(sum_so<sum_end)
                 sum_so=sum_end;
                 }

cout<<sum_so;
system("pause");
return 0;
}
