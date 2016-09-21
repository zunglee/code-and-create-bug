#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
int arr[9999999],j,k,sum,c=0;
int count(int j,int k); 
main()
{
      
cin>>j>>k;

sum=j;
arr[c]=j;
     count(j,k);   
  getch();
}


int count(int j,int k)
{
    
  //  for(int i=0;i<j;i++)
    {
     if((arr[c]-1)>arr[c+1])
     {
        arr[c+2]= arr[c+1]--;
         c++;
        arr[c+1]--;           
    cout<<arr[c+1];               
                        }       
            
            }
    
       return 0;
}
