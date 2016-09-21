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
int x=0;
char a[6];
while(t--)
{
            
            
            cin>>a;
            if(a[1]=='+')
            x++;
            if(a[1]=='-')
            x--;
          }
cout<<x<<endl;
getch();
}
