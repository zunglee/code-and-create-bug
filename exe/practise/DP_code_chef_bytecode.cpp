#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int n,m;
char ch;
cin>>m>>ch>>n;
long long int a[m][n],b[m][n];
for(int i=0;i<m;i++)
{ char ch;
for(int j=0;j<n-1;j++)
{ cin>>a[i][j]>>ch;
b[i][j]=-1111111111;
}
cin>>a[i][n-1];
b[i][n-1]=-1111111111;
}
b[0][0]=0;
for(int i=0;i<m-1;i++)
{
for(int j=0;j<n-1;j++)
{ if((a[i][j]>=0)&&(b[i][j]!=-1111111111))
{ long long int yh=a[i][j]+b[i][j];
if(i>0)
{ if(a[i-1][j]<0)
yh+=a[i-1][j];
if(j>0)
{
if(a[i-1][j-1]<0)
yh+=a[i-1][j-1];
}
if(j<n-1)
{if(a[i-1][j+1]<0)
yh+=a[i-1][j+1];
}
}
if(i<m-1)
{ if(a[i+1][j]<0)
yh+=a[i+1][j];
if(j>0)
{
if(a[i+1][j-1]<0)
yh+=a[i+1][j-1];
}
if(j<n-1)
{ if(a[i+1][j+1]<0)
yh+=a[i+1][j+1];
}
}
if(j>0)
{
if(a[i][j-1]<0)
yh+=a[i][j-1];
}
if(j<n-1)
{ if(a[i][j+1]<0)
yh+=a[i][j+1];
}
// yh+=a[i][j];
if(yh>b[i+1][j])
b[i+1][j]=yh;
if(yh>b[i][j+1])
b[i][j+1]=yh;
if((i==0)&&(j==0))
{b[i+1][j]=0;
b[i][j+1]=0;
}
}
}
int j=n-1;
if((a[i][j]>=0)&&(b[i][j]!=-1111111111))
{ long long int yh=a[i][j]+b[i][j];
if(i>0)
{ if(a[i-1][j]<0)
yh+=a[i-1][j];
if(j>0)
{
if(a[i-1][j-1]<0)
yh+=a[i-1][j-1];
}
if(j<n-1)
{if(a[i-1][j+1]<0)
yh+=a[i-1][j+1];
}
}
if(i<m-1)
{ if(a[i+1][j]<0)
yh+=a[i+1][j];
if(j>0)
{
if(a[i+1][j-1]<0)
yh+=a[i+1][j-1];
}
if(j<n-1)
{ if(a[i+1][j+1]<0)
yh+=a[i+1][j+1];
}
}
if(j>0)
{
if(a[i][j-1]<0)
yh+=a[i][j-1];
}
if(j<n-1)
{ if(a[i][j+1]<0)
yh+=a[i][j+1];
}
// yh+=a[i][j];
if(yh>b[i+1][j])
b[i+1][j]=yh;
}
}
int i=m-1;
for(int j=0;j<n-1;j++)
{ if((a[i][j]>=0)&&(b[i][j]!=-1111111111))
{ long long int yh=a[i][j]+b[i][j];
if(i>0)
{ if(a[i-1][j]<0)
yh+=a[i-1][j];
if(j>0)
{
if(a[i-1][j-1]<0)
yh+=a[i-1][j-1];
}
if(j<n-1)
{if(a[i-1][j+1]<0)
yh+=a[i-1][j+1];
}
}
if(i<m-1)
{ if(a[i+1][j]<0)
yh+=a[i+1][j];
if(j>0)
{
if(a[i+1][j-1]<0)
yh+=a[i+1][j-1];
}
if(j<n-1)
{ if(a[i+1][j+1]<0)
yh+=a[i+1][j+1];
}
}
if(j>0)
{
if(a[i][j-1]<0)
yh+=a[i][j-1];
}
if(j<n-1)
{ if(a[i][j+1]<0)
yh+=a[i][j+1];
}
// yh+=a[i][j];
if(yh>b[i][j+1])
b[i][j+1]=yh;
}
}
/*
for(int i=0;i<m;i++)
{ for(int j=0;j<n;j++)
{ cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
for(int i=0;i<m;i++)
{ for(int j=0;j<n;j++)
{ cout<<b[i][j]<<"\t";
}
cout<<"\n";
}*/

printf("%lld\n",b[m-1][n-1]);
// system("pause");
return 0;
}
