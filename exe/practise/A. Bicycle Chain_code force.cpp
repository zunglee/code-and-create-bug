#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
main()
{
int n,m,large=0,no=0;
cin>>n;
int ped[n];
for(int i=0;i<n;i++)
cin>>ped[i];
cin>>m;
int rear[m];
for(int i=0;i<m;i++)
cin>>rear[i];
float ratio;
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
        ratio=rear[j]/(ped[i]*1.0);
        if(ratio==(int)ratio)
        {
                             if(ratio>large)
                             { large=ratio;
                             no=0;
                             }
                             if(ratio==large)
                             no++;
                             }
        }
        cout<<no;
}
