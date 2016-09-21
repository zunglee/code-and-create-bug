#include <iostream>
#include <math.h>
using namespace std;
#define sc(x) scanf("%c",&x) //char
#define si(x) scanf("%d",&x) //int
#define sf(x) scanf("%f",&x) //float
#define sl(x) scanf("%I64d",&x) //int64_
#define sd(x) scanf("%lf",&x) //double
#define sld(x) scanf("%Lf",&x) //long double
#define slld(x) scanf("%lld",&x) //long long int
#define ss(x) scanf("%s",x) // string
#define sllu(x) scanf("%llu",&x) //long long unsigned
int positionOfSetBit( long long unsigned n){

 long long unsigned i=0 ;
while(n){
      if ((n&1))
      break;
       n = n >>1;
       i++;
}
return i;
}

int main()
{
    long long unsigned t , n, sum=0 , temp , x=1;
     long long unsigned arr[100]={0};
    sllu(t);
arr[0] = 1;
for(int i =1 ; i <20;i++){
arr[i] = arr[i-1] + pow(2,i);
}
long long unsigned power = 20;
long long unsigned pow2 = 1;
long long unsigned arr2[20]={0};
int ix =1;

 while(power--){
        pow2 = pow2*2;
        int pos = positionOfSetBit(pow2);

        sum +=(pow2*(pos-1) + arr[pos])%1000000007;
        sum%=1000000007;
   arr2[ix++] = sum;
}

//for(int i = 0 ;  i <20;i++) cout<<arr2[i]<<endl;

while(t--){
 		sllu(n);
 		sum=0;

 	 long long unsigned power = log(n)/log(2);
      long long unsigned pow2 = 1;
      power--;
      sum = arr2[power];
//      cout<<sum<<endl;
      pow2 = pow(2,power+1);
 	 int x=1;
 	 while((pow2+x)<=n){
            sum += pow2+x;
            sum = sum %  1000000007;
            x=x*2;
 	 }
cout<<sum%1000000007<<endl;
    }

}
