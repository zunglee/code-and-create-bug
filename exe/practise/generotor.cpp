 #include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int t;
    long long unsigned a,b,range,flag,j,no,fact;
    cin>>t;
    while(t--)
    {
    cin>>a>>b;
    range=b-a;
    int arr[range];
    for(int k=0;k<=range;++k)
    {
            arr[k]=a;
            a++;
            }
    
     for(int i=0;i<=range;++i)
    {
            flag=1,fact=0;
            if(arr[i]==1)
            arr[i]=0;
            if(arr[i]!=0)
            {
                         for(int k=2;k<=sqrt(arr[i]);++k)
                         {
                                 if(arr[i]%k==0)
                                 {
                                        flag=0;
                                        break;
                                        }
                                 }
                                 no=arr[i];
                         if (flag==0)
                         {
                                     
                                     j=i;}
                          else{
                               cout<<endl<<arr[i];
                               j=i+no;
                               }
                           while(1)
                           {
                                  if(j>range)
                                  break;
                                  arr[j]=0;
                                  j=j+no; 
                                   }                       
                         }
                                  }
cout<<endl;
}
    
    return 0;
}
    
