#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
int t,n,big;
cin>>t;
while(t--){
cin>>n;
int score[n][n],maxi[n][n];
maxi[0][0]=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{
        cin>>score[i][j];
        maxi[i][j]=0;
}
for(int i=1;i<n;i++)
{
        maxi[i][0]=maxi[i-1][0]+ score[i][0];
        maxi[0][i]=maxi[0][i-1] + score[0][i];
        }
        
for(int i=1;i<n;i++)
for(int j=1;j<n;j++)
{
        big=max(maxi[i-1][j],maxi[i][j-1]);
        maxi[i][j]= big + score[i][j];
        }
//cout<<maxi[n-1][n-1];
float moves=2*n-3;
double d=maxi[n-1][n-1]/(moves*1.0);
	if(maxi[n-1][n-1] < 0)
printf("Bad Judges\n");
else
printf("%1f\n",d);
}
}
