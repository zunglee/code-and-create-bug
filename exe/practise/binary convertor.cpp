#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
   int n,b[45],i;
   while(1)
   {
           i=-1;
           cin>>n;
          while(n)
           {  i++;     
            
              b[i]=n%2;
              
              n=n/2;
                  }
                  i++;
                   
                   while(i)
                   { 
                            i--;
                   cout<<b[i];
                  
                      }
                           cout<<endl;
           }     
        
  getch();
}
