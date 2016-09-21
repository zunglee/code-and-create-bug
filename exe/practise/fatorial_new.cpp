#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<process.h>
using namespace std;
#include<conio.h>
main()
{
long long signed a[2000],ind=0,m=-1,temp=-1,max ,x,y,digit;
cin>>x;
y=x;
while(x)
{
        m++;
        a[m]=x%10;
        x=x-a[m];
        x=x/10;
        }
        y--;
      max=temp=0;
 while(y!=1)
 {       
         int flag=1;
  temp=0;
  ind=-1;
  do{
          ind++;
         temp=y*a[ind]+temp;
         a[ind]=temp%10;
          { cout<<ind<<endl<<temp<<endl<<a[2]<<a[1]<<a[0];
        system("pause");
        }
         temp=temp/10;
         if(max<ind);
         flag=0;
 }while(temp || flag)  ;
 if(ind>max)
 max=ind;
 y--;        
}        
for(int i=max;i>=0;i--)
cout<<a[i];


getch();
system("pause");
}
