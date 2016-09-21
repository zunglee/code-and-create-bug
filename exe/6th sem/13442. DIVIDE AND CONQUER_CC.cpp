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
int t;
cin>>t;
while(t--)
{
            int n;
            cin>>n;
            int a[n],p1=0,p2=0,diff=0,s=0,e=0;
            for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
            p2=a[n-1];
            p1=a[0];
            for(int i=1,k=0;i<n-1;i++)
            {
                    if(p2>p1)
                    {
                             p1+=a[i];
                            continue; 
                             }
                    if(p1>p2)
                       {
                        p2=p2+a[k];
                        p1=p1-a[k];
                        k++;
                       }      
            }
            diff=p2-p1;
            if(diff<0)
            cout<<-1*diff<<endl;
            else cout<<diff<<endl;
}
getch();
}
