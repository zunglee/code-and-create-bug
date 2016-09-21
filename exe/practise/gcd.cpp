#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int gcd (int x, int y)
{
   if(y==1)
   return 1;
   else if(x%y==0)
   return x,x/y;
   else
   return y;
}
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b) && a!=0 && b!=0)
    {
                              printf("%d\n",gcd(a,b));
                              }
                              getch();
                              return 0;
}
