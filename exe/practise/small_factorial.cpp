#include<stdio.h>
#include<iostream.h>
#include"BigIntegerLibrary.hh"
int main()
{
    long long unsigned t,n;
    BigInteger fact=1;
    cin>>n;
    for(int i=1;i<=n;++i)
    fact*=i;
    cout<<fact<<endl;
    system("pause");
    return 0;
}
