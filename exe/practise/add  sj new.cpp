#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
 
int main()
{
    int a,b,n[10],i=0;
    for(int j=0;j<=10;++j)
    n[j]=0;
    cout<<"enter d no ";
    
    cin>>a>>b;
    cout <<endl;
    
    do
    {
       n[i]=n[i] + a%10 + b%10;
       if(n[i]>9)
       {
                 n[i+1]+=1;
                 n[i]=n[i]%10;
                 }  
        a=a-a%10;  b=b-b%10;
        a=a/10; b=b/10;
       i+=1; 
        }while(a!=0 || b!=0);
        
        
        cout<<endl;
        
        do
        {
        cout<<n[i] ;
        system("pause");
        --i;
        }while(i!=0); 
    
    getch();
    return 0;
}  
