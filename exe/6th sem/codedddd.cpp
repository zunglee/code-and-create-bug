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

{
          int n;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          cin>>a[i];
          int  min=a[n-1],count=n-1;
          for(int i=n-2;i>-1;i--)
          {
                 
            if(min<a[i])
             break;
             {
                  min=a[i];
                  count--;
                  }
          }
          cout<<count<<endl;
          }
//getch();
}
