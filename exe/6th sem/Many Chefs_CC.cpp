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
char s[2014];
//cin>>t;
//while(t--)
{
        cin>>s;
        int len=strlen(s);
        for(int i=0;i<len-4;i++)
        {
                
                if((s[i]=='?') &&(s[i+1]=='?')&&(s[i+2]=='?')&&(s[i+3]=='?'))
                {s[i]='C';
                s[i+1]='H';           
                s[i+2]='E'; 
                s[i+3]='F';
                 }
                
                else 
                {
                     {
                             if(s[i]=='?')
                             s[i]='C';
                             if(s[i+1]=='?')
                             s[i]='H';
                             if(s[i+2]=='?')
                             s[i]='E';
                             if(s[i+3]=='?')
                             s[i]='F';
                             }
                     }
                     
                     if((s[i]=='C') &&(s[i+1]=='H')&&(s[i+2]=='E')&&(s[i+3]=='F'))
                     continue;
                     else 
                     {
                         {
                             if(s[i]=='?')
                             s[i]='A';
                             
                             }
                      }
                
                }   
                 cout<<s<<endl; 
            }
            

getch();
}
