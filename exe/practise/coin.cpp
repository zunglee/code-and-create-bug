#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int rec (int n);
int main()
{
    int n;
    scanf("%d",&n);
   int res=rec(n);
      printf("%d",&res);
      getch();
      return 0;
      }
int rec (int a)
{
    int sum=0;
    sum=a/2+a/3+a/4;
    if(sum>a)
    {
             rec(a/2);
             rec(a/3);
              rec(a/4);
             }
    else
    return sum;
}
