#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
main()
{
int l,r,sql,sqr,x;
int sum,a,flag=0,num=0,sq;
cin>>l>>r;
x=sql=sqrt(l);
sqr=sqrt(r);
int arr[sqr-sql+1];
for(int i=0;i<(sqr-sql+1);i++)
{
        arr[i]=x*x;
        x++;
        }


for(int i=0;i<(sqr-sql+1);i++)
              {
                     cout<<arr[i]<<" = ";
                     for(int j=1;j<=arr[i];j++)
              {
                     float d=((arr[i]*1.0)/j);
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
      
     cout<<endl<<num; 
     
       
        
        
getch();
}
