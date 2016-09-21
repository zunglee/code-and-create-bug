#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
main()
{
string s1,s2;
int n,m,t=10,c;
 
while(t--)
{
          c=0;
cin>>s1>>s2;
n=s1.size();
m=s2.size();
if((c=(n-m)))
{
     
        if(c<0)
        {c=c*(-1);
        for(int i=0;i<n;i++)
        {
                if(s1[i]!=s2[i])
                c++;
                }
                }
                else 
                {
                     
                     for(int i=0;i<m;i++)
        {
                if(s1[i]!=s2[i])
                c++;
                }
                
                }
        
        }
        else       for(int i=0;i<n;i++)
        {
                if(s1[i]!=s2[i])
                c++;
                }
                cout<<c<<endl;          
}
   
}
