#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
      int t;
scanf("%d",&t);
while(t--)
{
char a[202];
            scanf("%s",&a);
            int len=strlen(a),x=1,cnt=0;
          sort(a,a+len);
          for(int i=0;i<len;i++)
          {
                 if (a[i]==a[i+1])
                 {
                                  x=x+1;
                  }
                  else
                  {
                      cnt += (x/2) + (x%2);
                      x=1;
                  }
                      }
                      printf("%d\n",cnt);
}
//getch();
}
