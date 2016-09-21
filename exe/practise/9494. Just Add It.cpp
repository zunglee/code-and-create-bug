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
# define MOD 10000007
long long unsigned run(long long unsigned base ,long long unsigned n , long long unsigned exp)
{
     
    {
    long long unsigned res=1;
    while(exp>0) {
       if(exp %2 == 1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
       
    }
    return res%MOD;
}
 }
 
main()
{
      long long unsigned n,k,sk=1,sn=1,sum=0;
      
      while(1){
               scanf("%llu%llu",&n,&k);
               if(n == 0 && k == 0)
               break;
               
               {
                       
                       sk = run(n-1 , n-1, k);
                       
                       sn= run (n-1,n-1, n-1);
                       sk= (2*sk)%MOD;
                       sn= (2*sn)%MOD;
                       
                       sum = (sk  + sn)%MOD;
                       
                       sk= run(n,n,k);
                       sn= run(n,n,n);
                       
                       sum = (sum+ (sk  + sn)%MOD)%MOD;
               
                       }
                       printf("%llu\n",sum);
               
               
               
               
               
          }

//system("pause");
}
