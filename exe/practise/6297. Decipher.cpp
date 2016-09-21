/*
For cubic function
     P(x)=ax^3 + bx^2 + cx + d
     r1,r2,r3 are real roots
     
    r1 + r2 + r3 = -b/a
     r1*r2 + r1*r3+ r2*r3 = c/a;
     r1*r2*r3 = - d/a; 

*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
long long int t,a,b,c;
cin>>t;
while(t--)
{
          cin>>a>>b>>c;
          cout<<(a*a)-(2*b)<<endl;
          }

getch();
}
