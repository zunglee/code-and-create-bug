/* coder- Ankitesh Kuswaha
          IIT2010082
*/
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
                
                if(child[i-1]<child[i])
                                       {
                                           can[i]=can[i-1]+1;
                                            
                                           
                                       }
                                      
                else
               { if(child[i-1]>child[i]) 
                { for( j=(i+1);j<n;j++)
                {    if(child[i-1]>child[i])
                                 break;
                          }
                                       can[j]=1;
                                       for( int k=(j-1);k<=i;k--)
                                       can[k]=can[k+1]+1;
                                       i=j; 
                                       }
                          
                          }
                            cout<<" done " ;
                }
         for(int i=0;i<100;i++)
         cout<<endl<<i;
         cout<<sum<<" done ";
  getch();
  return 0;
}
