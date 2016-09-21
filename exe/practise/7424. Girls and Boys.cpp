#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
int b=0,g=0,c;
while(b!=(-1))
{
              cin>>b>>g;
              
              if(b>g)
              {
                     g++;
                     c=b%g;
              }
              else if(g>b){
                   b++;
                   c=g%b;
                   }
                   if(c<1)
              c++;
                   if((g==b)&& (g!=0))
                   c=g/b;
                  // else c=0;
              
cout<<c<<endl;
              }


system("pause");
return 0;
}
