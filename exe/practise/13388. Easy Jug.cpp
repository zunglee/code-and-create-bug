#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

main()
{
      int t;
scanf("%d",&t);
while(t--)
{
  int x,y,z,maxi,mini;
  scanf("%d%d%d",&x,&y,&z);
  maxi = max(x,y);
  mini = min (x,y);
  if(z>maxi)
   printf("NO\n");
  else {int value=  __gcd(mini,maxi);
   maxi = max(value,z);
   mini = min(value,z);
   if(maxi%mini == 0)
   printf("YES\n");
   else printf("NO\n");
        } 
        }
}
