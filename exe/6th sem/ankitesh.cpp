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
      int l,r,i,sql,sqr,x,t,ankitesh[37]={2,4 ,9 ,16 ,25,64,289,729,1681,2401,3481,4096,5041,7291,10201,15625,17161,27889,28561,29929,65536,83521,85849,146689,262144,279841,458329,491401,531441,552049,579121,597529,683929,703921,707281,734449,829921},s=-1;
scanf("%d",&t);
while(t--)
{
int sum,a,flag=0,num=0,sq;
   scanf("%d%d",&l,&r);
   for( i=0;i<37;i++)
         {
           if(ankitesh[i]>l)
           {
                            sq=i;
                            
                            break;
                            }
           }
          
            for( i=36;i<=0;i--)
   {
            
           if(ankitesh[i]>r)
           {
           a=i;
           flag=1;
                            break;
                            }
           }
           if(flag==1)
           {num=a-sq;
 printf("%d\n",num);
}
else {
     a=37;
     num=a-sq;
 printf("%d\n",num);
     } 
}


getch();
}
