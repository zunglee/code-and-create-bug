#include<iostream>
using namespace std;
int main()
{
    long long unsigned total_tri,t,base_tri;;
    cin>>t;
    while(t--)
    {
     cin>>base_tri;
    if((base_tri/2)==(float)(base_tri/2))
    total_tri=(base_tri*(base_tri+2)*(base_tri*2+1))/8;       
     else
     total_tri=((base_tri*(base_tri+2)*(base_tri*2+1))-1)/8; 
     cout<<total_tri<<endl;
     }
    system("pause");
    return 0;
}
