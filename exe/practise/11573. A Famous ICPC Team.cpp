#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    
    long long unsigned a[4],t,n;
     cin>>t;
     
     for(n=1;n<=t;n++)
    {
               cin>>a[0]>>a[1]>>a[2]>>a[3];
               sort (a,a+4);
                 cout<<"Case "<<n<<": "<<a[3]+a[2]<<endl;
                   
                  }                        
    system("pause");
    return 0;
}
