#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    float x,y;
    while(scanf("%f",&x) &&x!=-1 && scanf("%f",&y) && y!=-1)
    {
                         float res=x/y;
                         if(int(res*1000000)==int(1000000000/37))
                         printf("Y\n");
                         else
                         printf("N\n");
                         }
                         getch();
                         return 0;
           }
