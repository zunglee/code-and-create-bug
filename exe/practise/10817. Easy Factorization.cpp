#include<stdio.h>
 
int main()
{
    long long int n,i,t;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    if(n==1)
    printf("%d",1);
    else
    {
        printf("%d",1);
               for(i=2;i<=n;++i)
               {
                                if(n%i==0)
                                {
                                          printf("X%d",i);
                                          n=n/i;
                                          i--;
                                          if(n==1)
                                          break;
                                          }
                                }
                                printf("\n");
               }
               }
   // system("pause");
    return 0;
}
