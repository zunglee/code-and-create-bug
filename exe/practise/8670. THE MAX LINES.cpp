#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
main()
{
long long unsigned r,temp;
long double   max;
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
     cin>>r ;
      
     max=roundf((((16*r*r)+1)/4.0)*100);
     if((int (max))%10==0)
     {
     max=max/100;
     cout<<"Case "<<i<<": "<<max<<"0"<<endl;
     }
     else
     {
          max=max/100;
     cout<<"Case "<<i<<": "<<max<<endl;
     
     }   
}
system("pause");
}
