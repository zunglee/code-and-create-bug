#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
      int n;
      cin>>n;
  int a[n],ct=0,k=0;
for(int i=0;i<n;i++)
cin>>a[i];

int temp;
cin>>k;
for(int i=0;i<n;i++)
{
        temp=0;
for(int j=i;j<n;j++)
{
           temp+=a[j];
       if(temp==k)
       ct++;
       
 }    }
cout<<ct;
system("pause");
}
