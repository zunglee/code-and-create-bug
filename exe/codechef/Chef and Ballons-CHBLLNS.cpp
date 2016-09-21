
#include<iostream>
using namespace std;
int main()
{
long long unsigned t ,m,n ;
cin>>t ;
while(t--){
    cin>>m>>n;
    if(m==1 || n==1){
        if(m==2 || n==2)
          {cout<<"Yes\n";continue;
          }else{ cout<<"No\n";continue;}
    }
    if ((m%2== 0) || (n%2==0))
      cout<<"Yes\n";
      else cout<<"No\n";
}
    return 0;
}
