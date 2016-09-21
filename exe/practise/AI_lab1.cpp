#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
int attacks(int os[8][8])
{
    return 0;
}
main()
{
int pos[8][8],j,k;
for(k=0;k<8;k++)
for(j=0;j<8;j++)
pos[k][j]=0;
for(int i=0;i<8;i++)
{ cin>>j>>k;
 pos[j][k]=1; // 2 4 4 5 4 6 5 0 5 4 6 2 6 5 7 1 
}
k=attacks(pos);
 
 
 
  getch();
}
