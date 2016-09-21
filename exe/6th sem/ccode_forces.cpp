#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
int t;
cin>>t;
while(t--)
{
          int angle;
          cin>>angle;
          float n=(360*1.0)/(180-angle);
          if(n==(int)n)
          cout<<"YES\n";
          else cout<<"NO\n";
          }
          

//getch();
}
