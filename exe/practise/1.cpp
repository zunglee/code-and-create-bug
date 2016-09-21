#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
     int c;
cin>>c;
while(c--)
{
int n,m,t,x,y;
cin>>n>>m>>t; 
x=n/m;
y=n%m;
if(y)
x=x+1;

cout<<((2*x))*t;
}

//system("pause");
}
