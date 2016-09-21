#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
main()
{
long long unsigned r;
float max;
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
     cin>>r  ; 
     max=(16*pow(r,2)+1)/4.0;
     int temp=(int) max*100;
     if(temp%10==0)
    cout<<"Case "<<i<<": "<<max<<"0"<<endl;
    else   
     cout<<"Case "<<i<<": "<<max<<endl;   
}
 system("pause");
}

