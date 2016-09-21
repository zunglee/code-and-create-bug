#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std ;

int funct(int a,int b)
{
    int j=a;
    for(int i=1;i<=3;++i)
    {
    a=a*2;
    a=a-b;
     }
if(a==0)
cout<<endl<<j<<"\t"<<b<<endl;
return 0;
}

int main()
{
    cout<<"\t\twelome ";
    cout<<endl<<"required no are \n";
    for(int n=3;n<=100;n++)
    {
            for(int m=n;m<=(n+10);m++)
            {
                    funct(n,m);
                    }
            
    }

cout<<"\nu r done";
getch();
return 0;
}    
    
    
    
