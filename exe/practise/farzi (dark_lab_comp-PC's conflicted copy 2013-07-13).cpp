#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int t[3][3]={1,9,2,8,3,7,4,6,5},min1=INT_MAX;
int move(int x, int y, int val)
{
    int i=x,j=y;
   int sum=val;
    if(i<=1)
{
          sum+=t[++i][j];
          cout<<i <<j<<endl;
         move(i,j,sum);
    }
    
    if(j<=1)
    {
         sum+=t[i][++j];
         cout<<i <<j<<endl;
         move(i,j,sum);
    }
    min1=min(sum,min1);
    system("pause");
}

main()
{
      
      move(-1,0,0);
      cout<<min1;
//cin>>t;
//while(t--)
{
          }

system("pause");
}
