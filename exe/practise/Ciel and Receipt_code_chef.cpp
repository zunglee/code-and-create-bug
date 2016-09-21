#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
long long unsigned p;

int menu[12]={1,2,4,8,16,32,64,128,256,512,1024,2048},t,n,c,i;
cin>>t;
while(t--)
{
          n=0;
cin>>p;
if(p>menu[11]|| p==menu[11])
{i=11;c=menu[i];}
else
{for(i=0;i<=11;i++)
{
        if(menu[i]>p)
        {
                     i--;
                     c=menu[i];
                     break;
        }
        
        }
        }
 while(p)
 {
         n=n+p/menu[i];
         p=p%menu[i];
         if(p!=0)
         if(i!=0)
         i--;
         }
 cout<<n<<endl;

}
system("pause");
return 0;
}
