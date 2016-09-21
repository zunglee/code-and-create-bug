#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
main()
{
  //    int t;
//cin>>t;
//while(t--)
{
        int len=8;
          int a[len],lft=0,ryt=0;
           for(int i=0;i<len;i++)
          cin>>a[i];
          
          int min_end=0, min_so=0,min1=99999999 ;
          for(int i=lft;i<len;i++)
          {
                  min1= min(min1,a[i]);
                  min_end= min (0,min_end+a[i]);
                  min_so=min(min_so,min_end);
          }
          min_so= min(min1,min_so);
        cout<<min_so;
          
}
system("pause");
}
