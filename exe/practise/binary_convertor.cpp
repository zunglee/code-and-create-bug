#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
int p;
cin>>p;
int j =(log(p)/log(2));
cout<<j;
int a[100000];
int len=0;
while(p)
{
        //cout<<p%2<<endl;
        a[len]=p%2;
        //cout<<a[len]<<endl;
        p=p/2;
        len++;
        }
         len--;
for(int i=len;i>=0;i--)
cout<<a[i];
 


system("pause");
return 0;
}
