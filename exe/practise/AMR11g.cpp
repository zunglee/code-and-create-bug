#include<iostream>
//#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              char s[100];
              scanf("%s",&s);
              int i=0,flag=0;
              while(s[i]!='\o')
              {
                 if(s[i]=='D')
                 {flag++;
                 break;
                 }
                 else
                 i++;
                 }
                 if(flag==1)
                 printf("You shall not pass!\n");
                 else
                 printf("Possible\n");
                 }
//getch();
return 0;
}
              
