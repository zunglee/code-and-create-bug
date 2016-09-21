#include<stdio.h>
#include<math.h>
#include<iostream.h> 
int main()
{
    int r,t,a,b;
    fscanf(stdin,"%d",&t);
    while(t--)
    {
              fscanf(stdin,"%d",&a);
              fscanf(stdin,"%d",&b);
              while(a!=(b+1))
              {
                         if(a==3)
                         fprintf(stdout,"%d\n",a);
                         else
                         {                   
                         if(a%4==1 || a%4==3)
                         {
                         
                                          int c;
                                           c=sqrt(a);
                                           for(int i=2;i<=c;++i)
                                           {
                                                   if(a%i==0)
                                                   break;
                                                   if(i==(c))
                                                   fprintf(stdout,"%d\n",a);
                                                   
                                             }
                          }
                          }
                                           
                         a++;
              }                          
              fprintf(stdout,"%d\n");
              }                  
             system("pause");  
    return 0;
        
}    
