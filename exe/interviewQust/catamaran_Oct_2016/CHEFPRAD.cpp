#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
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

void calAns(){
int N,M;
cin>>N>>M;
long long unsigned C[N],D[M],E;
cin>>E;
for(int i=0;i<N;i++){
cin>>C[i];
}

for(int i=0;i<M;i++){
cin>>D[i];
}

sort(C,C+N);
sort(D,D+M);

long long unsigned ans;
ans =maxMatching(C, D, E);


for(long long unsigned x = -2000000000; x <2000000000 ; x++){
   if(abs(C[0]-D[M-1] > E)){
        break;
   }

   for(int i=0 ; i <N;i++ ){
      C[i] +=x;
   }
   ans =max(ans, maxMatching(C, D, E));
}

cout<<ans<<endl;

}


int main() {

int t;
cin >> t;
while(t--){
     calAns();
}
	return 0;
}
