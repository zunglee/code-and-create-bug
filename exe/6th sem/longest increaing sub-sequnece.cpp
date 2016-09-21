#include<stdio.h>
int main()
{
int t,c,n,i,j,p,s;long int a[1500],m[1500];
scanf("%d",&t);
for(c=0;c<t;c++)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
m[0]=0;p=1;
for(i=0;i<n;i++)
{ s=1;
for(j=0;j<p;j++)
{
if(a[i]<m[j]){m[j]=a[i];s=0;break;}
}
if(s==1){m[p]=a[i];p++;}
}
printf("%d\n",p-1);
}
return 0;
}
