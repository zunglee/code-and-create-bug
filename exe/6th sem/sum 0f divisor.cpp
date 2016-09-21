#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#define f(a,b,c) for(a=b;a<c;a++)
main()
{
      int sum,a,flag=0,num=0,sq;
      cin>>a;
      sq=sqrt(a);
      int arr[sq];
      arr[0]=2;
      for(int i=2;i<sq;i++)
      {
              arr[i]= i*i;
              }
              for(int i=0;i<sq;i++)
      {
              cout<<arr[i]<<endl;
              }
             for(int i=1;i<=a;i++)
              {
                     cout<<i<<" = ";
                     for(int j=1;j<=i;j++)
              {
                     float d=((i*1.0)/j);
                        if(d==(int)d)
                        {//cout<<j<<",";
                        sum+=j;
                        }
                        }
                        cout<<"\b = "<<sum;
                        for(int k=2; k<=sqrt(sum);k++)
                        {
                           float d=((sum*1.0)/k);
                                if(d==(int)d)
                                {
                                             flag=1;
                                            
                                            break; }
                        }
                        
                                if(flag==0)
                                {
                                            num++;
                                           cout<<"dis is prime ";
                                           }
                        flag=sum=0;
                        cout<<endl;
                        }
        cout<<num;
  getch();
}
