#include<iostream>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long unsigned hy=1,len,bas=1,t;
    while(1)
    {scanf("%llu%llu%llu",&hy,&len,&bas);
      
    if(bas==0)
    break;
    if(hy<len)
    {t=len;
    len=hy;
    hy=t;
              }
              if(hy<bas)
    {t=bas;
    bas=hy;
    hy=t;
              }
              if(( pow(hy,2))==((pow(len,2))+ pow(bas,2)))
              printf("right\n")  ;           
               else printf("wrong\n");
                 
                }
    system("pause");
    return 0;
}
