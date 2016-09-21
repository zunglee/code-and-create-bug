#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Si(i) scanf("%d",&i)
main()
{
  //    int t;                             considering as even string 
//cin>>t;
//while(t--)
{
    char s[500];
    cin>>s;
    int len=strlen(s);
    int a[200],b[200],c[200],d[200],ta=0,tb=0,tc=0,td=0;  
    for(int i=0;i<100;i++)
    {
            a[i]=b[i]=c[i]=d[i]=0;
            }
             
    for(int i=0;i<(len-1);i=i+2)
    {
           // a[i]=a[i-1];
           // b[i]=b[i-1];
           // c[i]=c[i-1];
            //d[i]=d[i-1];
            if((s[i]=='0') && (s[i+1]=='0'))
            {
                           ta++;
                           a[i]=ta;
                           
                           }
            if((s[i]=='0') && (s[i+1]=='1'))
           {
                           tb++;
                            b[i]=tb;
                            
                            }
            if((s[i]=='1') && (s[i+1]=='0'))
            {
                           tc++;
                           c[i]=tc;
                           
                           }
            if((s[i]=='1') && (s[i+1]=='1'))
            {
                            td++;
                           d[i]=td;
                          
                           }
                           
            
     }     
       
         char buf[2];
         int as;
         for(int i=0;i<(len-1);i=i+2)
         {
                 
                 }
         
         
         
         
          }

getch();
}
