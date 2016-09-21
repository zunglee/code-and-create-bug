#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
      int n;
      cin>>n;
      long double dist;
      int a[n][3];
      for(int i=0;i<=n;i++)
      a[i][0]=i;
      for(int i=0;i<=n;i++)
      for(int j=1;i<=2;j++)
      cin>>a[i][j];

cout<<a[0][0]<<a[0][1]<<a[0][2];

system("pause");
return 0;
}
