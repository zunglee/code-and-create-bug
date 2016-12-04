#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<set>
#include<algorithm>
#include<map>
#include<set>
#include <stdlib.h>
//#include<conio.h>
#include<stdlib.h>
#define sc(x) scanf("%c",&x) //char
#define si(x) scanf("%d",&x) //int
#define sf(x) scanf("%f",&x) //float
#define sl(x) scanf("%I64d",&x) //int64_
#define sd(x) scanf("%lf",&x) //double
#define sld(x) scanf("%Lf",&x) //long double
#define slld(x) scanf("%lld",&x) //long long int
#define sllu(x) scanf("%llu",&x) //long long int
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
#define pllu(x) printf("%llu\n", x);
#define psn(x) printf("%s\n",x)

#define pn() printf("\n")
#define _p() printf(" ")

void myfunction(long long  unsigned n){
map<float , string> h;
set<float> s;
pair<set<float>::iterator , bool> p;
for(long long  unsigned i=1 ; i<=n ; i++){
        for(long long  unsigned k=n ; k>i ; k--){
//         cout<<"element accessing "<<i<<"/"<<k<<endl;
                   float f = i/(k*1.0);
                   p = s.insert(f);
                    if(p.second){
                    h[f] = to_string(i)+"/"+to_string(k);
                   }

        }
}
int count = 2;
cout<<"0/1 ";

 for(set<float>::iterator it = s.begin() ; it !=s.end();it++){
          cout<<h[*it] << " ";
          count++;
 }

cout<<"1/1\n";
cout<<"count="<<count<<endl;
cout<<"------------------------\n";
}

main(){


    long long unsigned n ;
    while(1){
    sllu(n);
    myfunction(n);
    }
}
