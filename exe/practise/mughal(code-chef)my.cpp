#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,l,q,t,r;
    float check,ck,b;
    cout<<"no of test case";
    cin>>t;
    while(t!=0)
    {
    cout<<"enter d no."<<endl;
     cin>>n;
    
            l=sqrt(n);
            int z[l];
            q=l;
            while(q!=1)
            {   
                l:
                r=rand()%q;
                if(z[r-1]==0)
                goto l;
                else
                z[r-1]==0;       
            l=q*q;
            b=n-l;
            check=sqrt(b); 
            ck=check-(int)check;
            if(ck==0)
            {
            cout<<"YES";
            break;
            }
            if(q==2)
            {
                    cout<<"NO";
                    break;
                    }
            q--;
              }
              t--;
              }
  getch();
  return 0;  
    }    
