#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
      int t;
      cin>>t;
      while(t--)
      {
long long int  a[3];
cin>>a[0]>>a[1]>>a[2];
sort(a,a+3);
long long int z=0;
a[0]=a[0]%1000000007;
a[1]=((a[1]-1)%1000000007);
a[2]=((a[2]-2)%1000000007);
z=(a[0]*a[1])%1000000007;
z=z%1000000007;
z=z*a[2];
z=z%1000000007;
cout<<z<<endl;
}
//getch();
}
