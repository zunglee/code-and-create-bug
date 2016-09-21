#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,d,n,t;
    cin>>t;
    while(t--)
    {
              int sum=0;
              cin>>n>>a>>d;
              sum=(n*(2*a+(n-1)*d))/2;
              cout<<sum<<"\n";
              }
    getch();
    return 0;
}
              
    
