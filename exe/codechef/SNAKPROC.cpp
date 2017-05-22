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


void calVaildInValid(int len){
len = 18;
char str[19]= "..H..T...HTH....T.";
int ct = 0;
int flag =1 ; //1 expecting head
int index = 0;
while(str[index] != '\0'){

	if(str[index] == '.'){
		cout<<"fuck \n";
		index++;
		continue;
	}

	if(flag && str[index] == 'H'){
	flag =0;
		cout<<"found H \n";
		ct++;
	}else{
		if(!flag && str[index] == 'T'){
			cout<<"found T \n";
			flag =1;
			ct--;
     	}else
     	{
     	cout<<"Oops\n";
     	cout<<"flab= "<<flag<<"  index = "<< index <<" "<<str[index]<<endl;
		flag =0 ;
		break;
	   }
    }

index++;
}

 if(ct == 0 && flag ){
 	cout<<"Valid\n";
 }else{
 	cout<<"Invalid\n";
 }
}

int main() {
	int t ,len;
	cin>>t;
	t=1;
	while(t--){
//		cin>>len;
		calVaildInValid(len);
	}
	return 0;
}
