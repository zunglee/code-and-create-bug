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

struct point{
    long long unsigned x[2];
    long long unsigned y[2];
    char axis ;
};

void sortPoints(struct point *p1){

if(p1->x[0] == p1->x[1]){
   p1->axis = 'x';
   if(p1->y[0] > p1->y[1]){
      long long unsigned temp = p1->y[0];
      p1->y[0] = p1->y[1];
      p1->y[1] = temp;
   }
}else{
   p1->axis = 'y';
    if(p1->x[0] > p1->x[1]){
      long long unsigned temp = p1->x[0];
      p1->x[0] = p1->x[1];
      p1->x[1] = temp;
   }
}
}

void calXaxis(struct point *p1,struct point *p2){

//parallel case
if(p1->x[0] != p2->x[0]){
cout<<"no\n";
}else if(p1->y[1] >= p2->y[0] ){
 cout <<"yes\n";
  }else{
  cout<<"no\n";
  }
}

void calYaxis(struct point *p1,struct point *p2){

//parallel case
if(p1->y[0] != p2->y[0]){
cout<<"no\n";
}else  if(p1->x[1] >= p2->x[0]){
 cout <<"yes\n";
  }else{
  cout<<"no\n";
  }
}
void calXYaxis(struct point *p1,struct point *p2){

if((p1->x[0] == p2->x[1]) || (p1->x[1] == p2->x[0]) || (p1->x[0] == p2->x[0]) || (p1->x[1] == p2->x[1])){
 cout <<"yes\n";
  }else{
  cout<<"no\n";
  }


}


void isSameSnake(){

struct point *p1 = new point;
struct point *p2 = new point;

cin>>p1->x[0]>>p1->y[0]>>p1->x[1]>>p1->y[1]>>p2->x[0]>>p2->y[0]>>p2->x[1]>>p2->y[1];

sortPoints(p1);
sortPoints(p2);

if(p1->axis == p1->axis){


   if(p1->axis =='y'){
//cout<<"y axis";
    if(p1->x[0] > p2->x[0]){
       struct point *temp = p1;
       p1 = p2;
       p2 = temp;
    }
   }else{
   //cout<<"X axis";
   if(p1->y[0] > p2->y[0]){
       struct point *temp = p1;
       p1 = p2;
       p2 = temp;
    }
   }
}else{
   if(p1->axis == 'y'){
     struct point *temp = p1;
       p1 = p2;
       p2 = temp;
   }
}

if( p1->axis =='x' && p2->axis =='x'){
  calXaxis(p1,p2);
}else if(p1->axis =='y' && p2->axis =='y'){
  calYaxis(p1,p2);
}else{
  calXYaxis(p1,p2);
}


}
int main() {

int t;
cin >> t;
while(t--){
     isSameSnake();
}
	return 0;
}
