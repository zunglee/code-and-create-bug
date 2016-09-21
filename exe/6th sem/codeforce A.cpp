#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
 int m,k,time=0,pet=0,x=0;
 cin>>m>>k;
 int d[m],s[m];

 for(int i=1; i<m;i++)
 cin>>d[m];
 for(int i=0; i<m;i++)
 cin>>s[m];
 pet=s[0];
 time=d[0];
 pet=pet-d[0];
 x++;
while(x!=(m-1))
{
    pet+=s[x];
    if(pet<d[x])
    {
                time+=k;
                pet+=s[x];
                while(pet<d[x] )
                {
                               time+=k;
                               cout<<time<<endl;
                               pet+=2;
                               
                }
                getch();
     }
                
    time+=d[x];
    pet-=d[x];
    
}

cout<<time;         
           
           
           
           
           
           
           
 

 
 

getch();
}
