#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

main()
{
int sum=0,a,n,t=0,l,r;
cin>>n>>t;
int arr[n];
arr[0]=0;
for(int i=1;i<=n;i++)
{
        cin>>a;
        sum+=a;
        arr[i]=sum;
        }
       

while(t--)
{
          cin>>l>>r;
          if(l<0)
          l=0;
          else l=l-1;
          cout<<arr[r+1]-arr[l-1];
          
          }  
        
        
        

getch();
}
