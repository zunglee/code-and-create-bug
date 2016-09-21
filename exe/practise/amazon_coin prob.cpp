#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

main()
{
  // s= sum     n = coin
  int s,n;
  cin>>s>>n;
  int v[n];
   for(int j=0;j<n;j++)
   cin>>v[j];
int min[s];
for(int i=0;i<s;i++)
min[i]=999999;
min[0]=0;
 
 for(int i=0;i<s;i++)
 for(int j=0;j<n;j++)
 {
         if((v[j]<=i) && ( (min[i-v[j]])+1 < min[i]))
         min[i]=min[i-v[j]]+1;
         }
         cout<<min[s-1];

system("pause");
}
