#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      cin>>i;
  i |= (i >> 1); i |= (i >> 2); i |= (i >> 4); i |= (i >> 8); i |= (i >> 16); 
  i=i - (i >> 1);
  cout<<i;
        
        
  getch();
}
