#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
main()
{
       int ans=0,x=1,n=1,j;
       while(1)
       {
       cin>>j;
       while(x!=j)
       {
                   n=x;
                   
       while(n)
       { 
               if((n%2)==1)
               ans++;
               n=n/2;
               }
               x++;
               }
                cout<<++ans<<endl;
                ans=0;
                }
  getch();
}
