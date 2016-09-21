#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
string s;
int i=0;
getline(cin,s);
int l=s.size();
int arr[20];
memset(arr,0,20);
for(int x=0;x<20;x++)
arr[x]=0;
for(int x=0;x<l;x++)
{
      if(s[x]==' ')
        {++arr[x-i-1];
        i=x;
        }
               
        }
        cout<<endl;
for(int x=1;x<20;x++)
if(arr[x]!=0)
cout<<x<<" "<<arr[x]<<endl;
getch();
}
