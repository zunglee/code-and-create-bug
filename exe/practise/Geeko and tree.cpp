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
# define MOD 10
main()
{
    
     long long unsigned s , t , n , k, sum , exp,base,res;
cin>>t;
while(t--)
{
          cin>>k>>n;
          sum=0;
          
          base =k;
          exp = n;
          res=1;
       while(exp>0) {
       if(exp %2 ==1) res=(res*base)%MOD; 
       base=(base*base)%MOD;
       exp/=2;  
    }
    res=res%MOD;
    res--;
    res=res%MOD;
    
         s= ((k%MOD)*res)%MOD;
          s=s/(k-1);
          s++;
          
  cout<<res;
          while(s){
                   sum+=s%10;
                   s=s/10;
                   
                   }
          //         cout<<sum<<endl;
          }

system("pause");
}
