#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,n,c=0,j;
    cout<<"enter d no of squares"<<endl;
    cin>>a;
    for(int i=1;i<50000;++i)
    {
           n=i*i;
           if(n>a)
           break;
           c++;
           
           j=a;    
               while(j!=0)
               {
                          n=n+i;
                          if(n>a)
                          break;
                          c++;
                          j--;
                          }
                          }
                          cout<<endl<<c;
                          getch();
                          return 0;
}
                          
                          
               
