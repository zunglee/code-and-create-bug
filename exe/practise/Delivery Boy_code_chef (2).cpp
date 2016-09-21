#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
# define f1(i,a,b) for(int i=a;i<b;i++)
# define f2(j,c,d) for(int j=c;j<d;j++)
# define f3(k,e,f) for(int k=e;k<f;k++)
main()
{
      int n,m;
      scanf("%d",&n);
int dist[n][n];
f1(i,0,n)
f2(j,0,n)
scanf("%d",&dist[i][j]);
f3(k,0,n) 
f1(i,0,n)
f2(j,0,n)
dist[i][j]=min((dist[i][k]+dist[k][j]),dist[i][j]);
 scanf("%d",&m);
 int s,d,g;
 while(m--)
 {
           scanf("%d%d%d",&s,&g,&d);
           printf("%d %d\n",dist[s][g]+dist[g][d],((dist[s][g]+dist[g][d])-dist[s][d]));                                        
 }                                                         
 getch();
}
