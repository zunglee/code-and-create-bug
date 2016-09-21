#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
int main()
{
       int n;
       cin>>n;
       int child[n],sum=0,can[n],j=0;
       for(int i=0;i<n;i++)
       can[i]=1;
       for(int i=0;i<n;i++)
       cin>>child[i];
       if(child[0]>child[1])
       can[0]=2;
                            

       for(int i=1;i<n;i++)
        {
               { if(child[i]>child[i+1]) 
                { for( j=(i+1);j<n;j++)
                {    if(child[i-1]>child[i])
                                 break;
                          }
                                       
                                       //cout<<child[j]<<endl<<i<<endl<<j;
                                       //getch();
                                       can[j]=1;
                                       for( int k=(j-1);k<=i;k--)
                                       can[k]=can[k+1]+1;
                                       i=j; 
                                       }
                          
                          }
                if(child[i-1]<child[i])
                                       {
                                           can[i]=can[i-1]+1;
                                            
                                           
                                       }
                                      
             
                          
                          
                          
                }
         for(int i=0;i<100;i++)
         sum+=can[i];
         cout<<sum;
        
  getch();
  return 0;
}
