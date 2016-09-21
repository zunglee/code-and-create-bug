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

int Gcd(int a, int b){
    
    if(!a)
    return b;
    else return Gcd(b%a,a);
}
main()
{
     int t , a ,b;
cin>>t;
while(t--)
{
          cin>>a>>b;
          int turn = 1;
          do{
          int mini = min(a,b);
          int maxi = max(a,b);
          int gcd = Gcd(mini, maxi);
         
          if(turn){
                   if(gcd == 1)
                   b--;
                   else {
                        if(b%2 ==0)
                        b=b/gcd;
                        else b--;
                        }
                  if (b<=1)
                  {
                  break;
                   }
                   turn = turn ? 0:1;
                   }
                   
                   else {
                        if(gcd == 1)
                   a--;
                   else {
                        if(a%2 == 0 )
                        a=a/gcd;
                       else a--;
                        }
                        
                  if (a<=1)
                  {
                  break;
                   }
                   turn = turn ? 0:1;
                   }
                        }while(a !=1 && b!=1);
          if (!turn && a<=1)  
         cout<<"Chandu Don"<<endl;
         if ( turn && b<=1)
         cout<<"Arjit"<<endl;
          }
          
system("pause");
}
