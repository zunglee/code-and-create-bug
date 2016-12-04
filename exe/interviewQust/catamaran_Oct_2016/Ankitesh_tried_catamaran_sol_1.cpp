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



/*
void printFraction(long long unsigned n){
long long unsigned i=0;
set<double> s;
hash_map<double,string> h;
double frac ;
string strfrac ;
   for(int i=0 ; i < n ;i++){
     for(int  j=i+1 ; j <n ; j++){
           frac=(i+1)/(j+1);
           strfrac = convertIntToString(i+1) +"/"+convertIntToString(j+1);
                 if(!s.find(frac)){
                   s.insert(frac);
                   h[frac] = strfrac;
                  }
      }
    }

    for(int x =0 ; x < s.count() ; x++){
      h[s.get(x)];
    }
}
*/
int gcd (int x, int y)
{


while(x !=y )
   if(x > y){
    x= x-y;
    }
    else {
    y=y-x;
   }
   return x;
}


string convertIntToString(long long unsigned n){

string s="" ;
char stringArr[] ={'0','1','2','3','4','5','6','7','8','9'};
while(n){
   s=stringArr[n%10] + s;
   n=n/10;
}
return s;
}

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
continue;
    long long unsigned arrSize ;
    arrSize =   (((n-1)*n)/2) ;
    long long unsigned index=0;


    double arr[arrSize] ,frac;
    long long unsigned IndexArr[arrSize];
    string  strfrac;
    string s[arrSize];


int num = 0;
int deno =0;
    for(long long unsigned i=0 ; i < n ;i++){
     for(long long unsigned  j=i+1 ; j <n ; j++){

           num=i+1;
           deno=j+1;
        cout<<num<<" "<<deno<<endl;
        long long unsigned gcdN= gcd( max(num ,deno) ,min(num ,deno) );
          cout<<gcdN<<endl;

           num =num/gcdN ;
           deno =deno/gcdN;
           frac=num/deno*1.0;
           strfrac = convertIntToString(num) +"/"+convertIntToString(deno);

                 arr[index] = frac;
                 IndexArr[index] = index ;
                 s[index++] = strfrac;

      }
    }

long long unsigned ptrIndex,temp;
double tempd;
    //Selection sort
/*

    for(long long unsigned i=0 ; i < arrSize ;i++){
    cout<< arr[i] <<" ";
    }
cout<<endl;
    for(long long unsigned i=0 ; i < arrSize ;i++){
    cout<< IndexArr[i] <<" ";
    }
    cout<<endl;
    for(long long unsigned i=0 ; i < arrSize ;i++){
    cout<< s[i] <<" ";
    }
    cout<<endl;
   int xx;cin>>xx;
    cout<<endl;
*/
for(long long unsigned i=0 ; i < arrSize ;i++){
ptrIndex =i;
     for(long long unsigned  j=i+1 ; j <arrSize ; j++){
if(arr[j] < arr[ptrIndex]){
 ptrIndex = j;
}
}
    tempd = arr[i];
    arr[i] = arr[ptrIndex];
    arr[ptrIndex] = tempd;

    temp = IndexArr[i];
    IndexArr[i] = IndexArr[ptrIndex];
    IndexArr[ptrIndex] = temp;
}

//sort(arr , arr+arrSize);
/*
    for(long long unsigned i=0 ; i < arrSize ;i++){
    cout<< arr[i] <<" ";
    }cout<<endl;
    for(long long unsigned i=0 ; i < arrSize ;i++){
    cout<< IndexArr[i] <<" ";
    }
    cout<<endl;
    for(long long unsigned i=0 ; i < arrSize ;i++){
    cout<< s[i] <<" ";
    }
    cout<<endl;
   cin>>xx;
*/
   int ct =0 ;
     cout<<"0/1";
  for(long long unsigned i=0 ; i < arrSize ;i++){
     if (i ==0) {
ct++;
     cout<<","<<s[(int)IndexArr[i]];
     continue;}
     if(arr[i-1] != arr[i])
     ct++;
     cout<<","<<s[(int)IndexArr[i]];
  }
  cout<<",1/1" <<endl;
  cout<<ct+2<<endl;
}
}
