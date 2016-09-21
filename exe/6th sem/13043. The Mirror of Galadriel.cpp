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
      int t;
      //cin>>t;
char s[11];
cin>>s;
int len=strlen(s),flag=1;
for(int i=0;i<(len/2);i++)
{
        if(s[i]!=s[len-i-1])
        {
                            flag=0;
                            break;
                            }
        }
        if(flag==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        


getch();
}
