#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
int n,large,small,m,w,x,y,z;
scanf("%d",&n);
int temp[n];
for(int i=0;i<n;i++)
temp[i]=i+1;

large=n;
small=1;
scanf("%d",&m);
while(m--)
{
scanf("%d%d%d%d",&w,&x,&y,&z);

        for(int i=w;i<y;i++)          
     {
     if(w==1)
      { temp[i]+=z;
       if(temp[i]>large)
       large=temp[i];
       if(temp[i]<small)
       small=temp[i];
       }
       if(w==2)
        {
                 temp[i]-=z;
       if(temp[i]>large)
       large=temp[i];
       if(temp[i]<small)
       small=temp[i];
       
       }
       }
                 
     
       }
       
       }
       printf("%d\n",large-small);
getch();
}
