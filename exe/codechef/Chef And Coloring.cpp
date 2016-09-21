
#include<iostream>
using namespace std;
int main()
{
int t ,len ,r,b,g ;
char c;
cin>>t ;
while(t--){
    r=g=b=0;
    cin>>len;
    for(int i = 0 ; i <len ;i++){
        cin>>c;
        if (c == 'R') r++;
        if(c =='G') g++;
        if (c == 'B') b++;
     }
cout<< min(min( r+g , r+b) , b+g)<<endl;
}
    return 0;
}
