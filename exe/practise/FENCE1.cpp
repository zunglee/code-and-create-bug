#include<iostream>
#include<stdio.h>
#include<conio.h>
#define two 1.414213
#define pi 3.142857
using namespace std;
int main()
{
    long long int a;
    while(scanf("%lld",&a) && a!=0)
    {
                          float r,area;
                           r=(float)(a/two);
                           area=((3*pi+2)*r*r)/4;
                           printf("%f\n",area);
                           }
getch();
return 0;
}
                           
