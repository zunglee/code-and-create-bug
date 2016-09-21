#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct node{
       int val;
       node *ptr;
       };
       
       int insert(int x,node *point)
       {
           
           
           return 0;
       }
       
       
main()
{
int val;
node *prev=NULL;
cin>>val;
node *root=new node;
root->val=val;
root->ptr=NULL;
prev=root;
while(1)
{
      
     cin>>val;
     if(val==-1)
     break;
     node *p=new node;
           p->val=val;
           p->ptr=NULL;
      //     cout<<p->val<<" new node  \n";
prev->ptr=p;
prev=prev->ptr;
     //insert(val);   
          }
          
          while(root!=NULL)
          {
                           cout<<root->val<<endl;
                           root=root->ptr;
                           }

system("pause");
}
