#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

class ankitesh
{
      private : static int x;
      public :
             ankitesh ()
             {
                      x=0;
                       cout<<"contructor 1\n";
                      }
                      
                      ankitesh(int i)
                      {
                                   x=i;
                                   cout<<"contructor 2\n";
                                   }
      
     ~ankitesh()
                      {
                                   //x=i;
                                   cout<<"destructor fuck off\n";
                                   }
      
      };
      int ankitesh::x=0;
main()
{
  //    int t;
//cin>>t;
//while(t--)
{
            ankitesh a1,a2(2);
            
}         

system("pause");
}
