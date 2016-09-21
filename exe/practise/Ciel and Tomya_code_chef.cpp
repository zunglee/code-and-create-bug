#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int cost_cal(int a[1000][1000]){

return 0;
}

main()
{
      int n,m;
      cin>>n>>m;
      int a[m][n],sp[n],spc=-1;
      for(int i=0;i<m;i++)
      for(int j=0;i<n;j++)
      {
              cin>>a[i][j];
              if(a[i][0]==1)
              {spc++;
                            sp[spc]=i;
              }
              
      
}

int cost[spc];
 for(int i=0;i<=spc;i++)
 {
       cost[i]=cost_cal(a[sp[spc]][0]);  
         
         
         }

system("pause");
return 0;
}
