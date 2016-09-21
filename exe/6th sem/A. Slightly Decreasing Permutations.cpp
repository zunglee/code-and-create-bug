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
  //    int t;
//cin>>t;
//while(t--)
{
            int n , k;
            cin>>n>>k;
            int a[n+1];
            for(int i=1;i<=n;i++)
            a[i]=i;
            if((n-k)==1)
            {
                        for(int i=n;i>=1;i--)
                       cout<<a[i]<<endl; }
           else if(k==0)         
           { for(int i=1;i<=n;i++)
                       cout<<a[i]<<endl;}
           else
           {
               int f=1,count=2*k,x=1,y=n;
               for(int i=1;i<=count;i++)
               {
                       if((f==1))
                       {
                       cout<<a[y]<<endl;
                       y--;
                       f=0;
                       continue;
                        }
                        if((f==0))
                       {
                       cout<<a[x]<<endl;
                       x++;
                       f=1;
                       continue;
                        }
                 }

              for(int i=x;i<=y;i++)
              cout<<a[i]<<endl;          
           
          }
}
system("pause");
//getchar();
}
