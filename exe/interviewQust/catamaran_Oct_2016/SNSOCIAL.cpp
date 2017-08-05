#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include <utility>
#include <math.h>
#include <set>
#include<climits>
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


int corA[8] = {-1,-1,-1,0,0,1,1,1};
int corB[8] = {-1,0,1,-1,1,-1,0,1};


bool isValid(int x , int y , int n , int m ){

if(x >= 0 && x< n && y >=0 && y <m) {
return true;
}
return false;
}



void calSocial(){
int n , m;
cin>>n>>m;
set<pair<int , int>> st , stTemp;
set<pair<int , int>>::iterator it;
int larg = INT_MIN;
int start = 1;
int dummy;
int flag = 0; // all same
int arr[n][m] , temp[n][m];
//case of all equal value not handle
for(int i=0 ; i< n ; i++){
for(int j=0 ; j < m ; j++){
   cin>>arr[i][j];
if(start ==1 ){
dummy = arr[i][j];
start = 0;
}else if(dummy !=arr[i][j]){
  flag = 1;
}
   temp[i][j] = -1;
   larg = max(larg,arr[i][j]);
}
}

if(flag == 0){
cout<<0<<endl;return;
}


        for(int i=0 ; i< n ; i++){
        for(int j=0 ; j < m ; j++){
              if(arr[i][j] == larg){
                temp[i][j] = 0;
                st.insert(make_pair(i,j));
              }
        }}

int hrs = 0;
 start = 1;
do{
stTemp.clear();
for(it=st.begin(); it!=st.end(); ++it)
    {
        int i= it->first;
        int j= it->second;
      //  cout<< i <<" "<<j<<endl;


     for(int cor = 0 ;cor< 8 ; cor++){
         if(isValid(i +corA[cor],j+corB[cor] , n , m  )){

               if(temp[i +corA[cor]][j+corB[cor]] == -1){

               //	cout<<"\n new Cor"<<i +corA[cor] <<" "<<j+corB[cor]<<" "<<hrs<<endl;

               if(start == 1){
               hrs++;
               start = 0;
               }
                   stTemp.insert(make_pair(i +corA[cor],j+corB[cor]));
                   temp[i +corA[cor]][j+corB[cor]] = max(hrs , temp[i +corA[cor]][j+corB[cor]]);
                 }

         }
     }


}


st = stTemp;
 start = 1;
}while(!stTemp.empty());

int hrsVal =-1;

for(int i=0 ; i< n ; i++){
for(int j=0 ; j < m ; j++){
   //cin>>arr[i][j];
   //temp[i][j] = -1;
   hrsVal = max(hrsVal,temp[i][j]);
}
}

cout<<hrsVal<<endl;
return;
}


int main(){
int t;
cin>>t;
while(t--){
 calSocial();
}

}
