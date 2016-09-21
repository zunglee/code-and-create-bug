#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int main()
{
 int size;
  
 cin>>size;
 int arr[size];
 for(int i = 0 ; i <size;i++)
 cin>>arr[i];
 
 int ink_index = 0 ,dec_index=0 , dec =0;
 int i = 0;
 
 for( i = 0 ; i <size-1;i++)
 {
      if(arr[i]<arr[i+1])
      ink_index=i;
      else break;
  }


 i++;
 for( ; i <size;i++)
 {
      if(arr[i-1]>arr[i])
      {
                         dec = 1 ;
                         dec_index = i;
                         }
                       
  }
  
 if(dec_index <size-1 && arr[dec_index+1] <arr[ink_index])
          {
              cout<<"no";
          system("pause");
             return 1;
          }
         else if( (arr[dec_index] <=arr[ink_index])  ){
              
                                 cout<<"yes"<<endl<<++ink_index << " "<<++dec_index;
}
                                 else cout<<"no";

system("pause");
return 1;
}
