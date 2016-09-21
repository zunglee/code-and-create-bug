#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int x1=0,y1=0,x2=10,y2=20;
    float xinc=x2-x1,yinc=y2-y1;
    while(xinc>=1 || yinc>=1)
    {
                  xinc=xinc/2.0;
                  yinc=yinc/2.0;
                  }
 printf("%f\n",xinc);
 printf("%f\n",yinc);
 getch();
 return 0;
}
