#include<stdio.h>
 int main()
{
    unsigned int t,n;
    fscanf(stdin,"%d",&t);
    while(t--)
    {
           fscanf(stdin,"%d",&n);
             if(n%2)
             fprintf(stdout,"%d\n",n-1);
             else
             fprintf(stdout,"%d\n",n);
    }
    return 0;
}
    
