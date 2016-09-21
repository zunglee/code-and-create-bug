#include<iostream>
//#include<conio.h>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
int ct=0;
int main()
{
    int t;
   // cin>>t;
  //  while(t--)
    {
          int len,n,f=0;
          cin>>len>>n;
          char a[len],b[len];
          for(int i=0;i<len;i++)  
          cin>>a[i];
          for(int i=0;i<len;i++)  
          cin>>b[i];
          
          for(int i=0;i<len;i++)  
          for(int j=i;j<len;j++)
          {
          for(int x=0;(x+i)<len;x++)  
         for(int y=x;y<=(x+(abs(i-j)));y++)
                  {
                                
                                 int d=abs(i-j),e=abs(x-y) ;
                                if (d==e)
                                {
           
        { int diff=0;
                   
          {
                  if((a[j]-b[y])!=0)
                  diff++;
                  
          }                   
          if(diff<=n)
          f++;                                             
                                                       }                                              
                                }
                                
                                }
                  }
                  cout<<f<<endl;  
    }
      system("pause");
       return 0;
}
