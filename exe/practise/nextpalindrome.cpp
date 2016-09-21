#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
        int a;
              cout<<"enter d no ";
              cin>>a;
             while(1)
             {
                     int  c[10000],n,r,i,q[10000] ;
                     a++; 
              n=a;
              
              while(n)
              {
                      r=n%10;
                      c[i]=r;
                      n=n-r;
                      n=n/10;
                      i++;
                      }
                      int p=i-1;
            for(int j=0;j<i;++j,--p)
            q[j]=c[p];           
             
    
                           p=i-1;
               for(int j=0;j<i;++j)                              
            {
                       if(q[j]==c[j])
                       {
                                     if(j!=(i-1))
                                     continue;
                                     cout<<endl<<a;
                                     }
                                     else 
                                     break;
            
            }
       
            }                               
getch();
return 0;
}
