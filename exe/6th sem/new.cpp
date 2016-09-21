#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
int t;
//scanf("%d",&t);
while(1)
{
  char a[1000000];
  cin>>a;          
         int len=strlen(a);
         int n[len],z[len],flag=0;
         
          for(int i=0;i<len;i++)
         {n[i]=a[i]-48;
          z[i]=a[i]-48;}
          
          sort(n,n+len);
          
          for(int i=0;i<len;i++)
          {if(z[i]!=n[i])
          {
          flag=1;
          break;}
          }
          if(flag==1)
          {
                     for(int i=0;i<len-2;i++)
                     {
                             cout<<z[i];
                             }
                             cout<<z[len-1]<<z[len-2]<<endl;
                             
                     }
                     else cout<<"-1\n";
          
            }
getch();
}
