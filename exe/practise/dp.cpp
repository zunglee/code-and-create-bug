#include<iostream>
using namespace std;
int n,sum=0;
int arr[50],s[50];
int fun(int l,int tot,int ind);
main()
{ cout<<"no of array ";
cin>>n;
for(int i=0;i<n;i++)
{scanf("%d",&arr[i]);sum+=arr[i];}
if(sum%2==1)
cout<<"can't be divided";
else
fun(0,0,0);
system("pause");
}


   int fun(int l,int tot,int ind)
{ int x;
if(tot==sum/2)
{
for(int i=0;i<ind;i++)
cout<<arr[s[i]]<<" ";
cout<<"\n";
}
else if(tot>sum)
return 0;
else if(l<n)
{
x=fun(l+1,tot,ind);
s[ind]=l;
x=fun(l+1,tot+arr[l],ind+1);

}
return 0;
}
