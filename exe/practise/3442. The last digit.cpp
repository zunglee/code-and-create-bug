#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    long long int t,a,b;
    cin>>t;
    while(t--)
    {
     cin>>a>>b;
    if(b!=0)
    {
    a=a%10;
     b=(b%4);
     if(b!=0)
     {
       b=pow(a,b);
       cout<<b%10<<endl;
       }
       else
       {
           b=pow(a,4);
            cout<<b%10<<endl;
       }
       }
       else cout<<1<<endl;
}
    system("pause");
    return 0;
}




