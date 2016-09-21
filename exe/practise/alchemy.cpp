#include<iostream>
using namespace std;
int main()
{
    int fe,w1;
    float f,w;
    cin>>fe>>w1;
    
    while(fe!=-1 && w!=-1)
    {
    f=fe/1000.0;
    w=w1/37.0;
    if (f==w)
    cout<<"Y"<<endl;
    else cout<<"N"<<endl;
    cin>>fe>>w1;
     }
    return 0;
}
