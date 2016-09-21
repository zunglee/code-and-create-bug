#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
      int t=0;
      scanf("%d",&t);
      while(t--)
      {
char a[1001];
cin>>a;
  
int len=0,n=1,k,i=0,q=0,prev=0;
len=strlen(a);
 
i=1;
while(i!=len)
{
             
             q=((int)a[i])-97;
             prev=((int)a[i-1])-97;
              while(prev!=q)
            {
                          n++;
                          prev++;
                          if(prev>25)
                          prev=0;
                   
                   }
             
                   n++;
                   i++;
            }
            n++;
             if(n<=(11*len))
             printf("YES\n");
             else printf("NO\n");
             }
getch();
}
