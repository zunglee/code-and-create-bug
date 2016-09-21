#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    long long int t,a,b;
    char z[1002];
    cin>>t;
    while(t--)
    {
     cin>>z>>b;
    if(b!=0)
    {
    int len=sizeof(z);
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
     
    return 0;
}





