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
char a[1000001];
while(1)
{
cin>>a;
int len=strlen(a);
for(int i=1;i<len;i++)
{
        if(a[i]=='0')
        {a[i]='!';
        break;}
        
        }
for(int i=0;i<len;i++)
{
        if(a[i]=='!')
        continue ;
        cout<<a[i];
        }
        cout<<endl;
}getch();
}
