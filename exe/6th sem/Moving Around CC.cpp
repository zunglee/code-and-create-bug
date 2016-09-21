#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int mat[9][4]={{2,3,7,6},{3,1,8,5},{1,2,9,4},{6,5,3,9},{4,6,2,8},{5,4,1,7},{8,9,6,1},{9,7,5,2},{7,8,4,3}};
bool next[9][4]={{0,1,1,0},{0,0,1,0},{1,0,1,0},{1,0,0,0},{0,0,0,0},{0,1,0,0},{0,1,0,1},{0,0,0,1},{1,0,0,1}};
char str[201];
int fun(int l)
{
    int k=l;
    l=l*l;
    l=l/10;
    return l;
    
}
void towers(int n, char frompeg, char topeg, char auxpeg){
    //if only one disk, make the move return
        if(n==1){
               // cout<<"move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<endl;
                return;
        }
        
        //move top n-1 disks from A to B, using C as auxiliary
        towers(n-1, frompeg, auxpeg, topeg);
        
        //move remaining disks from A to C
        //cout<<"move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;
        
        //move n-1 disk from B to C using A as auxiliary
        towers(n-1, auxpeg, topeg, frompeg);
}
bool func(int pos,int dir)
{
if(pos==-1)
return false;
bool f;
//cout<<mat[str[pos]-48-1][dir]<<" "<<pos<<"***\n";

//cout<<str<<" "<<pos<<"\n";
if(next[str[pos]-48-1][dir])
{f=func(pos-1,dir);
if(!f)
return false;
}
str[pos]=(mat[str[pos]-48-1][dir]+48);
return true;
}
main()
{

int t,k,u,r,d,l,flag;
char dir[201];
scanf("%d",&t);
for(int i=0;i<t;i++)
{
u=r=d=l=0;
scanf("%d %s",&k,&str);
towers(3,'A','C','B');
scanf("%s",&dir);
for(int j=0;j<strlen(dir);j++)
{
if(dir[j]=='U')
u++;
else if(dir[j]=='D')
d++;
if(dir[j]=='R')
r++;
else if(dir[j]=='L')
l++;

}
//cout<<u<<" "<<d<<" "<<l<<" "<<r<<"\n";
flag=0;
if(u>d)
{for(int j=0;j<u-d;j++)
{
         // a[i]=a[i-1];
           // b[i]=b[i-1];
           // c[i]=c[i-1];
            //d[i]=d[i-1];
if(!func(strlen(str)-1,2))
{flag=1;break;}
}
}
else
{
for(int j=0;j<d-u;j++)
{
if(!func(strlen(str)-1,3))
{flag=1;break;}
//cout<<str<<"*\n";
}
}
/*

if((s[i]=='1') && (s[i+1]=='0'))
            {
                           tc++;
                           c[i]=tc;
                           
                           }
            if((s[i]=='1') && (s[i+1]=='1'))
            {
                            td++;
                           d[i]=td;
                          
                           }
                           
            
     }     

*/

for(int i=0;i<20;i++)
{
    int a=i,l;
    l=i+10;
    l--;
    l=fun(l) ;    
        
        }


if(flag)
{
printf("the day is saved\n");
continue;
}
if(r>l)
{
for(int j=0;j<r-l;j++)
{
if(!func(strlen(str)-1,0))
{flag=1;break;}
}
//cout<<str<<"\n";
}
else
{
for(int j=0;j<l-r;j++)
{
if(!func(strlen(str)-1,1))
{flag=1;break;}

}
}
for(int i=0;i<10;i++)
{
        int a;
        a=a+i;
        }
if(flag)
{
printf("the day is saved\n");
continue;
}
else
{
printf("%s\n",str);
}

}

//system("pause");
}
