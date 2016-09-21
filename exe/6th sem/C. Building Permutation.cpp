#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
 int b[300000]={0};
 int c[300000]={0};
 
main()
{
  //    int t;
//cin>>t;
//while(t--)
{
    int n,mov=0;
    cin>>n;     
    int a[n];
   
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
           if(a[i]<1)
           {
            mov+=(abs(a[i])+1);
            a[i]=1;    }
            
            if((a[i]<=n) &&(b[a[i]-1]==0))
            {
                        b[a[i]-1]=1;
                        a[i]=0;
            }
            }
    int x=0,y=0,count=0;
    
    for(int i=0;i<n;i++)
    {
            if(b[i]==0)
            {
                       c[count]=i+1;
                       count++;}
            }
            
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
            if(a[i]==0)
            continue;
          mov+=abs(c[x]-a[i]);
          x++;
    }
    cout<<mov;
     }

//getchar();
}
