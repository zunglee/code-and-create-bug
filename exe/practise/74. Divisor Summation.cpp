#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<process.h>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
int n,sq,sum;
while(1)
{
cin>>n;
sq=sqrt(n);
        sum=0;
while(sq)
{ if(n%sq==0)
sum=sum+sq+(n/sq);
sq--;
             
           }
cout<<sq
}
getch();
}
