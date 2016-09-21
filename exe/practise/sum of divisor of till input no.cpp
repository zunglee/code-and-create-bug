#include<iostream.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n,s=0;
    cin>>n;
    for(int j=1;j<=n;++j)
    {
    for(int i=1;i<=sqrt(j);++i)
    {
            if(j%i==0)
            {s=s+i;
            if(sqrt(j)!=i)
            {
                          s=s+(j/i);
            }
            }
    }
}
 
       cout<<s;                   
 getch();
 return 0;
}  
