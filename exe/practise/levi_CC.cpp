#include<stdio.h>
//#include<conio.h>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
long long int num,m, i;
bool arr[100001];
 main()
{ 
       
//vector<int> v;
//v.push_back(2);
memset(arr,1,sizeof(arr));
arr[0]=0;
      arr[1]=0;
      for(int i=2;i<10001;i++)
      if(arr[i]==1)
      for(int j=2*i;j<10001;j+=i)
      arr[j]=0;
int ct=0,n,t;
//scanf("%d",&t);
t=10002;
ofstream ankitesh;
ankitesh.open("levi.txt");
while(t--)
{
//scanf("%d",&n);
//cin>>n;
n=10000-t;
ct=0;

{
    
 int pos=1;   
    while(1)
    {
            if(arr[pos]==1)
               {
     //                      cout<<pos<<"\n";
               if((n-2*pos)>1)
               {
               int tmp=n-2*pos;
               if(arr[tmp]==1)
               ct++;
               }
               else break;
               }
    pos++;
}
//ct-=2;          
}
printf("%d\n",ct);
ankitesh<<n<<" "<<ct<<endl;
//cout<<ct<<endl;
}
ankitesh.close();
//getch();
}
