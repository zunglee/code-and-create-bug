#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
      long long int t;
cin>>t;
string m="manku",s="";
while(t--)
{
          s="";
      long long int n;
      cin>>n;
      long long int temp=0,ct=0;
      
      while(temp<n)
      temp=temp+ pow(5,++ct);
                   
      for(int i=0;i<ct;i++)
      {
          int j= n%5;
          if(j==0)
          j=5;
          s=m.substr(j-1,1)+s;    
            
            if(n%5==0)
            n=n/5-1;
            else n=n/5;          
            
              
              }
          cout<<s<<endl;
          }
          
system("pause");
}
