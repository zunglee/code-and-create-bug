#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    unsigned a=1000000000,sum=0,n=1,s,final_sum=0;
    for( n;n<=a;++n)
    {
         sum=0;
         s=sqrt(n);
          cout<<"counting.."<<endl;
         for(int i=2;i<=s;i++)
         {
            if(n%i==0)
            {sum+=i;
            if((n/i)!=i)
            sum+=(n/i);
            }
             
            }
            final_sum=final_sum+sum;
            
            }
    cout<<final_sum;
    getch();
    return 0;
}
