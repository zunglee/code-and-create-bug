#include<stdio.h>
int main()
{
      int t,n,c;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&c);
    int ele=0,candy=0;
    for(int i=0;i<n;++i)
    {scanf("%d",&candy);
    ele+=candy;
         }
         if(ele>c)
         printf("\nNo");
         else printf("\nYes");
}
 
return 0;
}
