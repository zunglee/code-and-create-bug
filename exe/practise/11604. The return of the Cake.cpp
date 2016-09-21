#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
int x,y,z;
while(1)
{
cin>>x>>y>>z;
float t,t1;;
t=(x*x);
t+=(3*y);
t+=(y*y);
t1=t=sqrt(t*1.0);
t+=z*x;
t1=z*x-t1;
if(t>0 && t1>0)
{
       cout<<t<<endl<<t1;
       getch();
       cout<<"Not this time.";
       continue;
       }

t/=(((2*z)+y)*1.0);
cout<<(int)t<<endl;
}
getch();
}
