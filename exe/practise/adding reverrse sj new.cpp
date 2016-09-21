#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int rev(int m)
{
    int m1[10],i=0;
    do
    {
        m1[i]=m%10;
        i=+1;
        m=m-m1[i];
        cout<<m1;
        }while(m!=0);
        return 0;
}

int main()
{
    int a;
    cout<<"enter d no ";
    cin>>a;
    cout<<endl<<" reverse of "<<a <<" is ";
    rev(a);
    
    getch();
    return 0;
}  
