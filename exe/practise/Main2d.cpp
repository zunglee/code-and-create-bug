#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
              flag++;
              int a,n,m,b=0,i;
              scanf("%d%d",&n,&m);
              while(m--)
               {
                            scanf("%d",&a);
                            if(a>b)
                            b=a;
                            else
                            continue;
                            }
                          //  printf("%d\n",n-b);
               if(n-b==0)
               printf("Case #%d: 0/1\n");
               else
                printf("Case #%d: %d/%d",flag,n-b,n);
                }
                return 0;
                }
