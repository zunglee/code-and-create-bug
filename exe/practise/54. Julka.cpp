#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include <BigIntegerLibrary.h>

main()
{
   //   int t=10;
//cin>>t;
//while(t--)
{
BigInteger x,y,temp;
cin>>x>>y;
temp=(x+y);
temp/=2;
cout<<temp;
temp=(x-y);
temp/=2;
cout<<temp;

system("pause");
}
