#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sq;
    while(1)
    {
            int flag=0;
    cin>>n;
    sq=sqrt(n);
     
    for(int i=1;i<sq;i++)
    {
            if((pow(sq,2)+pow(i,2))==n)
            flag=1;
        sq--;    
    
    }
    if(flag==1)
    cout<<"yes\n";
    else cout<<"no\n";
    
} 
    
    system("pause");
    return 0;
}
