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
int n;
scanf("%d",&n);
int a[n],sum=0;
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,a+n);
for(int i=1;i<n;i++)
{
   sum+=(a[i]-a[0]);     
        }
        cout<<sum<<endl;

}
getch();
}
