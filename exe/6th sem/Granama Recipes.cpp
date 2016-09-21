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
      cin>>t;
      while(t--)
      {
char r[1001],s[1001];
   int ra[123][2],sb[123][2];
  
cin>>r>>s;
for(int i=97;i<123;i++)
for(int j=0;j<2;j++)
ra[i][j]=sb[i][j]=0;
   
int lr=strlen(r),ls=strlen(s);

for(int i=0;i<lr;i++)
{
        if(ra[(int)r[i]][0]==0)
        ra[(int)r[i]][0]=1;
++ra[(int)r[i]][1];
}
for(int i=0;i<ls;i++)
{
        if(sb[(int)s[i]][0]==0)
        sb[(int)s[i]][0]=1;
++sb[(int)s[i]][1];    
}
 
 int flag_dec=1,fre=1;
 for(int i=97;i<123;i++)
 {
           
         if(ra[i][0]!=sb[i][0])
          flag_dec=0;
         
                   if(ra[i][1]!=sb[i][1])
                   fre=0;
                   
                   if(flag_dec==0) 
                   break;                     
         }
         
         if(flag_dec==0)
         cout<<"YES\n";
         if((flag_dec==1) && (fre==1))
          cout<<"YES\n";
         if((flag_dec==1) && (fre==0))
         cout<<"NO\n";
          
 
 

}  
getch();
}
