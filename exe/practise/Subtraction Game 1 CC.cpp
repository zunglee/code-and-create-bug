#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
    
}
main()
{
      int t,n,sub=0,flag=0;
cin>>t;
while(t--)
{
 cin>>n;           
         long long int a[n];
         for(int i=0;i<n;i++)
         {
                 cin>>a[i];
                 if((flag==0)&&((a[i]%2)==1))
                 flag=1;
                 }
                 int x=a[0],temp;
                 sort(a,a+n);
                for(int i=0;i<n;i++) 
                    {
                        temp=gcd(x,a[i]);
                       x=min(temp,x);
                    }  
                cout<<temp<<endl;
                 
                 
          }

//system("pause");
}
