#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
      int t,d[3],ans;
cin>>t;
while(t--)
{
            cin>>d[0]>>d[1]>>d[2];
            sort(d,d+3);
            ans=d[2]-(d[0]+d[1]);
            if(ans<0)
            {
                     cout<<"0"<<endl;
                     continue ;
                     }
                     else       
            printf("%0.8f\n",(float)ans);
            }

getch();
}
