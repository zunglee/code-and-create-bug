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
main()
{
  //    int t;
  int i,j,mid,n;
  int a[]={101,2,301,4,501,6};
  i=0;
  j=5;
  int m=2;
  mid=(i+j)/2;
  while(a[mid]!=m){
                   mid=(i+j)/2;
                   if(mid%2==m%2){
                       if(a[mid]<m)
                       i=mid+1;
                       else
                       j=mid-1;
                       }
                       else{
                            if(a[mid+1]>m&&mid+1<=j){
                                                     i=mid+1;
                                                     mid++;
                                                     }
                            else if(a[mid-1]<m&&mid-1>=0){
                                 j=mid-1;
                                 mid--;
                                 }
                       }
                   }
                                                         
cout<<mid;
//while(t--)
{
          }

system("pause");
}
