#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

int fun (int arr[], int len)
{int max_index=0 , ct=1, prev_max_index=0;
    
    for(int i=1;i<len;i++)
    {
            if(arr[max_index]== arr[i])
           ct++;
           else ct--;
           
           if(ct ==0)
           {
                 ct=1;
                 prev_max_index=max_index;
                 max_index = i;
                 } 
            
            
            }
            ct=0;
             for(int i=0;i<len;i++)
            {
                if(arr[ max_index]==  arr[i])
                ct++;     
                     }
            if(ct== len/2)  return arr[ max_index];
            else return arr[ prev_max_index];
    
    
}

main()
{
int arr[10]={4,4,4,4,4,6,7,8,1,9};
cout<<fun(arr,10);
  
system("pause");
}
