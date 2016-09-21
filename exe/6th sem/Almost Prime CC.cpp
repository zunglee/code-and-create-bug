#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int t;
cin>>t;
while(t--)
{
long long unsigned int n;
cin>>n;
double x=sqrt(n);
if(n==4)
{
        cout<<"YES\n";
        continue ;
        }
if(x==(int)x)
{if(((int)x%4==3) || ((int)x%4==1))
cout<<"YES\n";
else
cout<<"NO\n";          
}
else
cout<<"NO\n";
}
getch();
}
