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
main()
{
       int n;
       cin>>n;
       int child[n],sum=0,can[n];
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
                {
                                       can[i]=1;
                                       }
                
                }
         for(int i=0;i<n;i++)
         sum+=can[i];
         cout<<sum;
  getch();
}
