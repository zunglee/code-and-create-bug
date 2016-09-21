#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<string>
#define MOD 1000000007
using namespace std;
int fact[10001], invfact[10001]; 
int powmod(int base, int expo){
if(expo==0)
return 1;
else if(expo&1)
return (long long)base*powmod(base, expo-1)%MOD;
else{
int root=powmod(base, expo>>1);
return (long long)root*root%MOD;
}
}
int inverse(int x){
return powmod(x, MOD-2);
}
int count;
void init(){
fact[0]=1;
for(int i=1; i<=10000; i++)
fact[i]=(long long)i*fact[i-1]%MOD;
invfact[10000]=inverse(fact[10000]);
for(int i=10000; i>0; i--)
invfact[i-1]=(long long)i*invfact[i]%MOD;
}
int nCr(int n, int r){
if(r>n || r<0)
return 0;
return (long long)((long long)fact[n]*invfact[r]%MOD)*invfact[n-r]%MOD;
}

using namespace std;
char arr[100][101];
bool check[100][100]={0};
char arr1[4];
bool flag=0;
int m,n;
 int sum,t;  
void towers(int n, char frompeg, char topeg, char auxpeg){
    //if only one disk, make the move return
        if(n==1){
                //cout<<"move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<endl;
                return;
        }
        
        //move top n-1 disks from A to B, using C as auxiliary
        towers(n-1, frompeg, auxpeg, topeg);
        
        //move remaining disks from A to C
        //cout<<"move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;
        
        //move n-1 disk from B to C using A as auxiliary
        towers(n-1, auxpeg, topeg, frompeg);
}
void traverse(int i,int j)
{
if(i==m-1){
flag=1;
return;
}
if(i+1<m && check[i+1][j]==0 && (arr[i+1][j]==arr1[0] || arr[i+1][j]==arr1[1] || arr[i+1][j]==arr1[2])){
check[i+1][j]=1;
traverse(i+1,j);
}
if(i-1>=0 && check[i-1][j]==0 && (arr[i-1][j]==arr1[0] || arr[i-1][j]==arr1[1] || arr[i-1][j]==arr1[2])){
check[i-1][j]=1;
traverse(i-1,j);
}
if(j+1<n && check[i][j+1]==0 && (arr[i][j+1]==arr1[0] || arr[i][j+1]==arr1[1] || arr[i][j+1]==arr1[2])){
check[i][j+1]=1;
traverse(i,j+1);
}
if(j-1>=0 && check[i][j-1]==0 && (arr[i][j-1]==arr1[0] || arr[i][j-1]==arr1[1] || arr[i][j-1]==arr1[2])){
check[i][j-1]=1;
traverse(i,j-1);
//move top n-1 disks from A to B, using C as auxiliary
}
}
int main()
{
    for(int i=0;i<t;i++)
 {
         
    int n=3,k=4,i,j;
     sum=0;
     long long int a[n];
     //move top n-1 disks from A to B, using C as auxiliary
    // for(int j=0;j<n;j++)
     //cin>>a[j];
int count; 
     count=n-1;
    // sort(a,a+n);
     
     for( j=n-1;j>=k-1;j--)
     {
         sum+=(nCr(count,k-1)*a[j])%MOD;
         count--;
     }
     sum=sum%MOD;
     //move top n-1 disks from A to B, using C as auxiliary
    // cout<<"Case #"<<(i+1)<<": "<<sum<<endl;
 }
int t,i,j,k,l;
scanf("%d",&t);
while(t--){
flag=0;
//move top n-1 disks from A to B, using C as auxiliary
//move top n-1 disks from A to B, using C as auxiliary
scanf("%d%d",&m,&n);
towers(3,'A','C','B');
for(i=0;i<m;i++){
scanf("%s",&arr[i]);
}
for(i=0;i<1000;i++){
for(k=0;k<m;k++)
for(j=0;j<n;j++)
check[k][j]=0;
l=i;
arr1[3]='\0';
//move top n-1 disks from A to B, using C as auxiliary
for(j=2;j>=0;j--){
arr1[j]=(l%10)+'0';
l/=10;
}
//cout<<arr1<<"\n";
for(k=0;k<n;k++){
if(check[0][k]==0 && (arr[0][k]==arr1[0] || arr[0][k]==arr1[1] || arr[0][k]==arr1[2])){
check[0][k]=1;
traverse(0,k);
}
if(flag==1){
            
break;
}
}
/*
struct node
{
       int f;
       char c;
       node *left;
       node *right;
} *temp1 ,*temp2;
struct hc
{
       char a;
       char code[15];
};
hc lis[30];
int ind=0,flag=0,k=0;
node msg[27];
char cod[15];
void sort(int n)
{
     for(int i=0;i<n-1;i++)
     for(int j=i+1;j<n;j++)
     {
             if(msg[i].f<msg[j].f)
             swap(msg[i],msg[j]);
     }
}
void gen(node *temp,int x)
{
     
     if(temp->left!=NULL)
     {
                         
                         cod[x]=49;
                         gen(temp->left,x+1);
                         cod[x]=48;
                         gen(temp->right,x+1);
     }
     else
     {
     cod[x]='\0';
     strcpy(lis[k].code,cod);
     lis[k++].a=temp->c;
     
     }
     return;
}
void convert()
{
     
     while(ind>1)
     {
                  
                 sort(ind);
                 msg[ind].f=msg[ind-1].f+msg[ind-2].f;
                 msg[ind].c=char(48+ind);
                 temp1=new node;
                 temp1->c=msg[ind-1].c;
                 temp1->f=msg[ind-1].f;
                 temp1->left=msg[ind-1].left;
                 temp1->right=msg[ind-1].right;
                 temp2=new node;
                 temp2->c=msg[ind-2].c;
                 temp2->f=msg[ind-2].f;
                 temp2->left=msg[ind-2].left;
                 temp2->right=msg[ind-2].right;
                 msg[ind].left=temp1;
                 msg[ind].right=temp2;
                 
                 msg[ind-2].c=msg[ind].c;
                 msg[ind-2].f=msg[ind].f;
                 msg[ind-2].left=msg[ind].left;
                 msg[ind-2].right=msg[ind].right;
                 //swap(msg[ind],msg[ind-2]);
                 ind--;
                 
                 //cout<<msg[ind-1].left->c<<" "<<msg[ind-1].right->c;
                 
     }
     
     temp1=msg;
    
     gen(temp1,0);
}
main()
{
      char str[100];
      ofstream fil;
      ifstream in;
      fil.open("op.txt");
      for(int i=0;i<26;i++)
      msg[i].f=0;
      cin>>str;
      for(int i=0;i<strlen(str);i++)
      {
              flag=0;
              for(int j=0;j<ind;j++)
              {
                      if(str[i]==msg[j].c)
                      {msg[j].f++;flag=1;break;}
              }
              if(flag==0)
              {msg[ind].c=str[i];msg[ind++].f++;}
              
      }
      convert();
      for(int i=0;i<strlen(str);i++)
      {
              for(int j=0;j<k;j++)
              if(lis[j].a==str[i])
              {
                                  fil<<lis[j].code;
                                  cout<<lis[j].code;
              }
      }
      cout<<"\n";
fil.close();
////decoding
in.open("op.txt");
char arr[1000];
in>>arr;
int s=0,l=0,flag=0;
for(int i=0;i<strlen(arr);i++)
{
        l=i;
        //cout<<s<<" "<<l<<"\n";
        for(int j=0;j<k;j++)
        {
                flag=1;
                if(strlen(lis[j].code)==l-s+1)
                {
                                              flag=0;
                                         for(int l=s;l<strlen(lis[j].code)+s;l++)
                                         if(lis[j].code[l-s]!=arr[l])
                                         {flag=1;break;}
                                         
                }
                if(flag==0)
                {cout<<lis[j].a;s=l=i+1;break;}
        }
        
}
cout<<"\n";
system("pause");
}

*/
if(flag==1){
cout<<arr1<<"\n";
break;
}
}
}
//system("pause");
return 0;
}
