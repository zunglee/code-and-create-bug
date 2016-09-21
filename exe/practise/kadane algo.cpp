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
      int t;
//cin>>t;
//while(1)
{
          int len=9;
          int a[len],i=0,j=0;
           for(int i=0;i<len;i++)
          cin>>a[i];
          int max_ending_here=0, max_so_far=0 ;
          for(;i<len;i++)
          {
                  max_ending_here= max (0,max_ending_here+a[i]);
                  max_so_far = max (max_so_far,max_ending_here);
                  
          }
          
      cout<<max_so_far;    
          
          }

system("pause");
}
