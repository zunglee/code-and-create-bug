#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
main()
{int t;
cin>>t;
      while(t--)
      {
                printf("\n");
    long long unsigned n,sum=0,a ;
    scanf("%llu",&n);
    for(int i=0;i<n;i++)
    { scanf("%llu",&a);
            sum=sum+a;
            }
            float avg=sum/(n*1.0);
           if(avg!=(int)avg)
           {printf("NO\n");
           continue;
           }
           else printf("YES\n");
    } 
  
}
