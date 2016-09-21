#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int gcd (int,int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int x,y,res;
              scanf("%d%d",&x,&y);
              if(x>y)
              {
          res=gcd(x,y);
              x=x/res;
              y=y/res;
              printf("%d",x-y);
              }
              else
              {
                   res=gcd(abs(y),abs(x));
              x=x/res;
              y=y/res;
              printf("%d",x-y);}
              }
getch();
return 0;
}
int gcd (int a,int b)
{
if(b==0||a%b==0)
return b;
else
return gcd(b,a%b);

}
