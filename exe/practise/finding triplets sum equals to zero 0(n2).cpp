#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
 int arr[11]={1,2,3,4,5,-5,-4,-3,-1,0,-2};
 sort(arr,arr+11);
 for(int i=0 ;i<11;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 int tri=0;
 for(int i=1 ;i<11;i++)
 {
         int j=i;
        int k=10;
         while(k>j)
         {
                     if (arr[i]+arr[k]+arr[j]==0)
                     {
                                                  cout<<arr[i]<<" "<<arr[k]<<" "<<arr[j]<<endl;
                                                 tri++;
                                                 j++;
                                                 k--;
                                                 continue;
                     }
                     else if((arr[i]+arr[k]+arr[j]) > 0)
                                k--;
                                else j++;
                    }
         }
         cout<<tri;
system("pause");
}
