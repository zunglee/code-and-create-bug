#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
main()
{
      int n,ca ,t;
      scanf("%d",&ca);
      
while(ca--)
{
         scanf("%d",&n);
         if(n==8)
         {
            t=3;     }
                 else
       t=log(n)/(log(2));
       t=pow(2,t);
       t=n-t;
       t=2*t+1;
       
printf("%d\n",t);
        

}
getch();
}
