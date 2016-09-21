#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
        int a[100],len=-1,back=0,front=0,i=0,flag=0;
        while(1)
        {
                 len++;
               cin>>a[len];
               if(a[len]==0)
               break;
              
        }
        len--;
        int size=len;
        front=a[i];
        back=a[len];
        while(i!=len)
        {
               if(front>back )
               {
                             len--;
               back=back+a[len];
               }
               if(front<back)
               {i++;
               
              
               front=front+a[i];
               }
               if(front==back)
               {
                             
                              cout<<endl;
                              for(int j=0;j<=i;j++)
                              cout<<a[j]<<" ";
                              cout<<endl;
                              for(int j=len;j<=size;j++)
                              cout<<a[j]<<" ";
                              break;
                              }
               }
        
        
  getch();
}
