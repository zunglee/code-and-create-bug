#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
            sum=sum+a[i];
            }
           float avg=sum/n;
           if((int) avg!=avg)
           cout<<"not";
    
        
  getch();
}
