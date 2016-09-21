#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
      int k,x=0,i=0,c=0;
      cin>>k;
       string s,sub[k]; 
       cin>>s;
       int len=s.length();
      while((i+k+1)!=len)
      {       x=i+k-1;
      cout<<x;
      getch();
       while(x!=i)
       {
       sub[c]=s[x];
       x--;
       c++;
       }
       i++;
       c=0;
       
       cout<<sub[0]<<sub[1];
       cout<<endl;
       }
  getch();
}
