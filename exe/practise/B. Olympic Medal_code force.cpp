#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<conio.h>
main()
{
int n,m,k,a,b,r2,p1,p2;
double r1;
cin>>n;
int x[n];
for(int i=0;i<n;i++)
cin>>x[i];
cin>>m;
int y[m];
for(int i=0;i<m;i++)
cin>>y[i];
cin>>k;
int z[k];
for(int i=0;i<k;i++)
cin>>z[i];
cin>>a>>b;
sort(x,x+n);
sort(y,y+m);
sort(z,z+k);
r2=(sqrt(z[k-1]*a*1.0));
r1= x[n-1];
r1=r1/((sqrt(y[0]*a*1.0))+r2); 
r1=pow(r1,2);
printf("%0.10f",r1);
getch();
}
