#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
   long long unsigned min=0, n,t;
     scanf("%llu",&t);
     
      while(t--)
      {
              min=999999999;
              scanf("%llu",&n);
long long unsigned x[n];
for(int i=0;i<n;i++)
scanf("%llu",&x[i]);
sort(x,x+n);
for(int i=1;i<n;i++)
{
        if((x[i]-x[i-1])<min)
        min=x[i]-x[i-1];
        }
printf("%llu\n",min);

}
getch();
}
