#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
              flag++;
              char m[3];
              float a;
              scanf("%f",&a);
              cin>>m;
              if(strcmp(m,"kg")==0)
              printf("%d %.4f lb\n",flag,a*2.2046);
              else if(strcmp(m,"l")==0)
              printf("%d %.4f g\n",flag,a*0.2642);
              else if(strcmp(m,"lb")==0)
              printf("%d %.4f kg\n",flag,a*0.4536);
              else if(strcmp(m,"g")==0)
              printf("%d %.4f l\n",flag,a*3.7854);
              }
              return 0;
}
