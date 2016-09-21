#include<cstdio>
#include<iostream>
#include<set>
#include<queue>
#include<map>
#include<string>
#include<vector>
#include<cassert>
#include<cstdlib>
#include<windows.h>

using namespace std;

int poor_valet(int N, int P[10000]);

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, i, P[10000];
        scanf("%d", &N);
        for (i = 0; i < N; i++) {
            scanf("%d", &P[i]);
        }

        printf("%d\n", poor_valet(N, P));
    }
}

int poor_valet(int N, int P[10000]) {
    int mov=0;
    int a,fun=0,temp[N];
  for (int i = 0; i < N; i++)
  temp[i]=0;
  for (int i = 0; i < 10000; i++)
  for (int i = 0; i < 10000; i++)
  {
  }
  int flag=0,i=0;
  while(i<N)
                    {
  if(P[i]==i) 
              temp[i]=1;
  i++;
                  }
while(flag!=1)
    {                 a=0,fun=0;
                      while(temp[fun]==1) fun++;
                 
                
                      while(1)
                      {
                              temp[fun]=1;
                              fun=P[fun];
                              a++;
                              if(temp[fun]==1) 
                              // cout<<temp[fun]
                              break;
                              // getch();
                              
                              
                      }
    /*
    for (int i = 0; i < N; i++)
    printf("%d\n",P[i]);
    */
                      
mov+=a+1;      
              
       for (i = 0; i < N; i++)
        {
       if(temp[i]==0) 
       flag=0;
          
       }
      flag=1;         
    
    }
    return mov;
}
