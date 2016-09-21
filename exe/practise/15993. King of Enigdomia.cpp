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
#define mod 1000000007
main()
{
      int t;
si(t);
while(t--)
{
          
 int m,n;
 si(m);si(n);
 long long int  a[m][n];
          for(int i=0;i<m;i++)
          a[i][0]=1;
          for(int j=0;j<n;j++)
          a[0][j]=1;
        for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
        a[i][j]= (((a[i-1][j]%mod)+(a[i][j-1]%mod))%mod);
              plld(a[m-1][n-1]);  
          }
system("pause");
}
