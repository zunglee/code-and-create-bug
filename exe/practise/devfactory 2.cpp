#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

#define sc(x) scanf("%c",&x) //char
#define si(x) scanf("%d",&x) //int
#define sf(x) scanf("%f",&x) //float
#define sl(x) scanf("%I64d",&x) //int64_
#define sd(x) scanf("%lf",&x) //double
#define sld(x) scanf("%Lf",&x) //long double
#define slld(x) scanf("%lld",&x) //long long int
#define ss(x) scanf("%s",x) // string

#define pc(x) printf("%c",x)
#define pi(x) printf("%d ",x)
#define pf(x) printf("%f ",x)
#define pl(x) printf("%I64d ",x)
#define pd(x) printf("%lf ",x)
#define pld(x) printf("%Lf ",x)
#define plldn(x) printf("%lldn", x);
#define ps(x) printf("%s", x);

#define pin(x) printf("%d\n",x)
#define pln(x) printf("%I64d\n",x)
#define pfn(x) printf("%f\n",x)
#define pdn(x) printf("%lf\n",x)
#define pldn(x) printf("%Lf\n",x)
#define plld(x) printf("%lld\n", x);
#define psn(x) printf("%s\n",x)

#define pn() printf("\n")
#define _p() printf(" ")
main()
{
      int t,n,m;
cin>>t;
while(t--)
{
          cin>>n>>m;
          long long unsigned a[n][m],b[n][m];
          for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
          {b[i][j]=0;
          cin>>a[i][j];
          }       
          b[0][0]= 1;
          for(int i=1;i<n;i++)
          {
                  if(a[i][0]> a[i-1][0])
                  b[i][0]=b[i-1][0]+1;
                  else break;
                  }
          for(int j=1;j<m;j++){
                  if(a[0][j]> a[0][j-1])
                  b[0][j]=b[0][j-1]+1;
                  else break;
                  }
                  
          
                  long long unsigned path =0 ; 
                  
                  for(int i=1;i<n;i++)
                  for(int j=1;j<m;j++)
                  {
                          
                          if(a[i][j-1] > a[i-1][j]){
                          b[i][j]+=b[i][j-1]+1;
                          path = max(path,b[i][j]);
                           }
                     else  {
                           b[i][j]+= b[i-1][j]+1;
                           path = max(path,b[i][j]);
                     }
                     }
                     
                     
                     cout<<path<<endl;
                     
                     }  
                  

system("pause");
}
