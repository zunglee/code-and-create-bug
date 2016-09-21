#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
main()
{
      int t,n,i,sum=0;;
      scanf("%d",&t);
      while(t--)
      {
       i=n=sum=0;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
         for(i=0;i<n;i++)
       scanf("%d",&b[i]);
       sort(b,b+n);
       for(i=0;i<n;i++)
       sum=sum+(b[i]*a[i]);
      printf("%d\n",sum);
       }
  getch();
}
