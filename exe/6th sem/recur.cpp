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
int c=0,a[3][3]={2 ,1 ,0 ,2 ,4 ,-2, 5, 6, 3};
int recur(int i, int j, int sum)
{
 
 
 
    sum+=a[i][j];
    cout<<++c<<" "<<sum<<endl;
     if(((i+1)<3) && ((j+1)>=3))
    {
                 for (i=i+1;i<3;i++)
                 sum+=a[i][j];
                 }
                
     if(((j+1)<3) && ((i+1)>=3))            
                 {
                 for ( j=j+1;j<3;j++)
                 sum+=a[i][j];
                 }
    if((i==2) && (j==2))
    cout<<sum<<" u "<<endl; 
    if(((i+1)<3) && ((j+1)<3))
    recur(i,j+1,sum);
   if(((i+1)<3))
    recur(i+1,j,sum);
   
}




main()
{
      recur(0,0,0);
      
getch();
}
