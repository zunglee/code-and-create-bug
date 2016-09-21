#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=0,y=0,z=0;
    cin>>x>>y>>z;
    while(x!=0 || y!=0 || z!=0)
    {
                if((x-y)==(y-z))
                {
                                cout<<"AP "<<z+(y-x)<<endl;
                }
                else
                cout<<"GP "<<z*(y/x)<<endl;               
     cin>>x>>y>>z;
     }
     getch();
     return 0;
     }
