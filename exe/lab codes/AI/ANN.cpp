#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{

srand(time(NULL));
float x[150][4];
for(int i=0;i<150;i++)
{ char ch;
string h;
cin>>x[i][0]>>ch>>x[i][1]>>ch>>x[i][2]>>ch>>x[i][3]>>h;
}
int jlen=5;
int klen=3;
int ans[150][3]={0};
for(int i=0;i<50;i++)
{ ans[i][0]=1;
ans[i+50][1]=1;
ans[i+100][2]=1;
}
float w[4][jlen]; float ww[jlen][klen]; float th[jlen]; float thr[klen]; float dd[jlen]; float d[klen]; float hy[jlen]; float y[klen];
float s[jlen]; float e[klen]; float ss[klen];

for(int i=0;i<jlen;i++)
{ dd[i]=0;
hy[i]=0;
s[i]=0;
int u=rand()%10;
th[i]=u;
}
for(int i=0;i<klen;i++)
{ d[i]=0;
y[i]=0;
ss[i]=0;
int u=rand()%10;
thr[i]=u;
}
for(int i=0;i<4;i++)
{ for(int j=0;j<jlen;j++)
{
int h=rand()%100000;
w[i][j]=h;
w[i][j]/=10000.0;
int yy=rand()%2;
if(yy==0)
w[i][j]*=-1;

}
}
for(int i=0;i<jlen;i++)
{ for(int j=0;j<klen;j++)
{
int h=rand()%100000;
ww[i][j]=h;
ww[i][j]/=10000.0;
int yy=rand()%2;
if(yy==0)
ww[i][j]*=-1;

}
}
float al=0.1;
for(int epo=0;epo<500;epo++)
{
for(int it=0;it<150;it++)
{

for(int j=0;j<jlen;j++)
{
s[j]=0;
hy[j]=0;
for(int i=0;i<4;i++)
{
s[j]+=w[i][j]*x[it][i];
}
s[j]-=th[j];
hy[j]=1/(1+(pow(2.71,(-1*s[j]))));
}
for(int k=0;k<klen;k++)
{
ss[k]=0;
y[k]=0;
for(int j=0;j<jlen;j++)
{
ss[k]+=ww[j][k]*hy[j];
}
ss[k]-=thr[k];
y[k]=1/(1+(pow(2.71,(-1*ss[k]))));
e[k]=ans[it][k]-y[k];
d[k]=y[k]*(1-y[k])*e[k];
thr[k]-=al*d[k];
}
for(int j=0;j<jlen;j++)
{ float rty=0;
for(int k=0;k<klen;k++)
{ rty+=d[k]*ww[j][k];
}
dd[j]=hy[j]*(1-hy[j])*rty;
}
for(int j=0;j<jlen;j++)
{ for(int k=0;k<klen;k++)
{ ww[j][k]+=al*hy[j]*d[k];
}
th[j]-=al*dd[j];
}
for(int j=0;j<jlen;j++)
{ for(int k=0;k<4;k++)
{ w[k][j]+=al*x[it][k]*dd[j];
}
}

}
}

cout<<"Results are as follows \n";
for(int it=0;it<150;it++)
{
cout<<it<<".\t";
for(int j=0;j<jlen;j++)
{
s[j]=0;
hy[j]=0;
for(int i=0;i<4;i++)
{
s[j]+=w[i][j]*x[it][i];
}
s[j]-=th[j];
hy[j]=1/(1+(pow(2.71,(-1*s[j]))));
// cout<<s[j]<<"\t"<<hy[j]<<"\n";

}
for(int k=0;k<klen;k++)
{
ss[k]=0;
y[k]=0;
for(int j=0;j<jlen;j++)
{
ss[k]+=ww[j][k]*hy[j];
}
ss[k]-=thr[k];
y[k]=1/(1+(pow(2.71,(-1*ss[k]))));
e[k]=ans[it][k]-y[k];
// cout<<ss[k]<<"\t"<<y[k]<<"\n";
if(y[k]>0.5)
cout<<"1\t";
else cout<<"0\t";
// d[k]=y[k]*(1-y[k])*e[k];
}
cout<<"\n";
//system("pause");
}


system("pause");
getch();
return 0;
}
