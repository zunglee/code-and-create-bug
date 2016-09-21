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
scanf("%d",&t);
while(t--)
{
long long unsigned n;
scanf("%llu",&n);
if((n&(n-1)))
printf("Yes\n");
else printf("No\n");
}

}
