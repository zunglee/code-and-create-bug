#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

#define sc(x) scanf("%c",&x) //char
#define si(x) scanf("%d",&x) //int
#define sf(x) scanf("%f",&x) //float
#define sl(x) scanf("%I64d",&x) //int64_
#define sd(x) scanf("%lf",&x) //double
#define sld(x) scanf("%Lf",&x) //long double
#define slld(x) scanf("%lld",&x) //long long int
#define ss(x) scanf("%s",x) // string

#define pc(x) printf("%c",x)
#define pi(x) printf("%d ",x)
#define pf(x) printf("%f ",x)
#define pl(x) printf("%I64d ",x)
#define pd(x) printf("%lf ",x)
#define pld(x) printf("%Lf ",x)
#define plldn(x) printf("%lldn", x);
#define ps(x) printf("%s", x);

#define pin(x) printf("%d\n",x)
#define pln(x) printf("%I64d\n",x)
#define pfn(x) printf("%f\n",x)
#define pdn(x) printf("%lf\n",x)
#define pldn(x) printf("%Lf\n",x)
#define plld(x) printf("%lld\n", x);
#define psn(x) printf("%s\n",x)

#define pn() printf("\n")
#define _p() printf(" ")

int x,y;

int firstQuad(){
    
    if ((((x-1)%2) == 0) && (y>= 0 && y<=((2*x)-(x-1)) ) || ((y%2 == 0) && ( x>=0 && x<=(y-1))))  
                   printf("YES\n");
                   else printf("NO\n");
return 0;
}

int secondQuad(){
    
    if (((-1*x)%2 ==0) && (y>=0 && y<=((-1*x))) ||(y%2 ==0 && (x>=0 && x<=(-1*y))))
                   printf("YES\n");
                    else  
                   printf("NO\n");
return 0 ;
}

 int thirdQuad(){
     
     if(( (-1*x)%2 == 0 && (y>=0 && y<=x))  || ((-1*y)%2==0 && (x>=0 && x<=y)))
               printf("YES\n");
               else  
                   printf("NO\n");
return 0 ;
}

 int fourthQuad(){
     if(((x-1)%2==0 && (y>=0 && y<=(x-1))) || ((-1*y)%2 == 0 && (x>=0 && x <=((-1*y)+1))))
               printf("YES\n");
               else  
                   printf("NO\n");
return 0 ;
}
 
main()
{
      int t;
si(t);
while(t--)
{
       si(x);
       si(y);
       
       
       if(x>0 && y>0)
       firstQuad();
       else if (x<0 && y > 0 )
                secondQuad();
                else if (x<0 && y <0)
                         thirdQuad();
                              else if (x>0 && y <0)
                                       fourthQuad();
                                        else printf("YES\n");
         }

system("pause");
}
