#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
      long long  int sa=0,sg=0,a,g;
      int n;
cin>>n;
cin>>a>>g;
sa=a;
cout<<"A";
for(int i=1;i<n;i++)
{
       cin>>a>>g;
         if((abs((sa+a)-sg))<500)
         {sa+=a;
         cout<<"A";
         }
         else
         {sg+=g;
        cout<<"G";
         }
         } 

//getch();
}
