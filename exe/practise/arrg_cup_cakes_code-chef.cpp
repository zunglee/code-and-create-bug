#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
   unsigned int t,n,sq,div;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
             sq=sqrt(n);
             while(sq)
             {
                      div=n/sq; 
                      if(n%sq==0)
                      { 
                        printf("%d\n",(div-sq));
                        
                        break;         
                                 }
                     sq--;            
                      }  
              }
              system("pause");
              return 0;
}
