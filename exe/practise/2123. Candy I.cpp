#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
main()
{
      while(1)
      {
    int n,sum=0,moves=0,more=0;
    scanf("%d",&n);
    if(n==-1)
    break;
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]);
            sum=sum+a[i];
            }
            float avg=sum/(n*1.0);
           if(avg!=(int)avg)
           {printf("-1\n");
           continue;
           }
           sum=0;
           for(int i=0;i<n;i++)
           {
                   if((a[i]-avg)>0)
                   {more=more+(a[i]-avg);
                   moves=moves+(a[i]-avg);
                   }
                   if((a[i]-avg)<0 && (more>0))
                   more--;
                   } 
                   printf("%d\n",moves);
    
    } 
  getch();
}
