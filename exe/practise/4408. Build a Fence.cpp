#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float pi=(1/(2*acos(-1.0)*1.0)),a;
     
    while(1)
    {
            cin>>a;
            if(a==0)
            break;
    a=roundf(a*a*pi*100);
    if(int (a)%10==0)
    cout<<a/100<<"0"<<endl;
   else cout<<a/100<<endl;
}
    system("pause");
    return 0;
}
