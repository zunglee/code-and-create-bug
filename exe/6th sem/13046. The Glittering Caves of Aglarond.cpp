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
            int n,m,k;
            cin>>n>>m>>k;
            char grid;
            int a[n],l=0;
             for(int i=0;i<n;i++)
             a[i]=0;
            //memset(a,'\0',n);
            for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                    cin>>grid;
                    if(grid=='*')
                    ++a[i];
            }
            sort (a,a+n);
           for(int i=0;i<k;i++)
           {
                a[0]=m-a[0];
                sort(a,a+n);   
                   }
            for(int i=0;i<n;i++)
            l=l+a[i];
            cout<<l<<endl;    
}
getch();
}
