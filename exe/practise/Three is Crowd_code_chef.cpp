#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
# define s(i) scanf("%llu",&i)
# define  p(i) printf("%llu\n",i)
main()
{
long long unsigned t,n,n1,c=1000000007;
//s(t);
while(1)
{
        s(n);
        if(n<3)
        {
         p(0);      
               }
        n1=n-3;
        n1 = n1*n;
       // n1=n1%c;
        n1=n1/2;
        n1=n1+1;
        p(n1);
        }

getch();
}
