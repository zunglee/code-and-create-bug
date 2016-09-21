#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;

int main()
{
    int a,b,n[100],i=0;
    cout<<"what's in your mind"<<endl;
    cin>>a>>b;
    for(int i=0;i<=100;++i)
    {
    n[i]=0;
}

    n[i]=(a%10)+(b%10);
  do
    {
                  if(n[i]>9)
                  {
                  n[i]=n[i]%10;
                  n[i+1]=n[i+1]+1;
                  }   
                  cout<<n[i];                          
                  a=a-a%10;
                  a=a/10;
                  b=b-b%10;
                  b=b/10;
                  i=i+1;
                  n[i]=n[i]+(a%10)+(b%10);
    } while(a!=0 || b!=0);
    cout<<n[i+1];         
    getch();
    return 0;
}
