#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[100000],b[1000000];
main()
{
      int flag =1;
      cin>>a>>b;
      int la=strlen(a), lb=strlen(b);
      for(int i=0;i<la-1;i++)
      {
              if(((a[i]-48)^(a[i+1]-48)==(b[i]-48)) || (((a[i]-48) | (a[i+1]-48))==(b[i]-48)))      
              flag=1;
              else
              flag=0;
              }
      if(flag==1)
      cout<<"YES";
      else
      cout<<"NO";

getch();
}
