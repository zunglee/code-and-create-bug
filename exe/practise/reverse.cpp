#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a,b=0,t=0;
     cin>>a;
     while(t!=3)
     {
                b=b*10;
           b=b+a%10;
           cout<<b<<endl;
           a=a-b;
           a=a/10;
           t=t+1;
           }
           cout<<b;
           getch();
           return 0;
           }
           
           
                
    
