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
  //    int t;
//cin>>t;
//while(t--)
{
            int a = 0;
        int orig = a;
        int count = 0;
        while(a>0)
        {
            a = a >> 1 << 1;
            if(orig-a==1)
                count++;
            orig = a >> 1;
            a = orig;
        }
        cout<<count;
          }

getch();
}
