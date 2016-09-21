#include<iostream>
#include<math.h>
#include<vector>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
char ch[200];
int mx=10000,n;
void towers(int n, char frompeg, char topeg, char auxpeg){
    //if only one disk, make the move return
        if(n==1){
              //  cout<<"move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<endl;
                return;
        }
        
        //move top n-1 disks from A to B, using C as auxiliary
        towers(n-1, frompeg, auxpeg, topeg);
        
        //move remaining disks from A to C
      //  cout<<"move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;
        
        //move n-1 disk from B to C using A as auxiliary
        towers(n-1, auxpeg, topeg, frompeg);
}
void func(int sum,char a,char b,int pos);
int main()
{
int te;
cin>>te;
towers(3,'A','C','B');
//char a,b;
while(te--)
{

mx=100000;
cin>>ch;
n=strlen(ch);
func(0,'0','0',0);
cout<<mx<<"\n";
}
return 0;
}
void func(int sum,char a,char b,int pos)
{
int p=0;
if(pos==n)
{

if(sum<mx) mx=sum;
return ;
}
if((a==ch[pos])||(b==ch[pos]))
{
func(1+sum,a,b,pos+1);
}
else if(a!=ch[pos])
{
p++;
if(a=='1') func(2+sum,'0',b,pos+1);
else func(2+sum,'1',b,pos+1);
}
else if(b!=ch[pos])
{

if(b=='1') func(2+sum,a,'0',pos+1);
else func(2+sum,a,'1',pos+1);
}
if(pos!=n-1)
{
if((p==0)&&(b==ch[pos+1]))
func(1+sum,a,b,pos+2);
if((p==0)&&(b!=ch[pos+1]))
{
if(b=='1') func(2+sum,a,'0',pos+2);
else func(2+sum,a,'1',pos+2);

/*convert();
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
}
if((p==1)&&(b==ch[pos+1]))
{
if(a=='1') func(2+sum,'0',b,pos+2);
else func(2+sum,'1',b,pos+2);
}
if((p==1)&&(b!=ch[pos+1]))
{
if((a=='1')&&(b=='1')) func(3+sum,'0','0',pos+2);
if((a=='1')&&(b=='0')) func(3+sum,'0','1',pos+2);
if((a=='0')&&(b=='1')) func(3+sum,'1','0',pos+2);
if((a=='0')&&(b=='0')) func(3+sum,'1','1',pos+2);

}
}

}
