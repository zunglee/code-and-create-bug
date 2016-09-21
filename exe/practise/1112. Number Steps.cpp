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
        int x,y,t;
      scanf("%d",&t);
        while(t--)
        {
        scanf("%d%d",&x,&y);
        if((x%2==0)&&(y%2==0))
        {
                              if(x==y)
                              {cout<<2*x<<endl;
                              continue;
                              }
                              if(x==(y+2))
                              {cout<<x+y<<endl;
                              continue ;
                              
                              }
                               cout<<"No Number"<<endl;
                               continue;
                              }
          if((x%2==1)&&(y%2==1))
          {
                             if(x==y)
                              {cout<<2*x-1<<endl;
                              continue;
                              }
                              if(x==(y+2))
                              {cout<<x+y-1<<endl;
                              continue ;
                              }
                               cout<<"No Number"<<endl;
                               continue;          
                                        }
                                 cout<<"No Number"<<endl;                    
                                 }
  getch();
}
