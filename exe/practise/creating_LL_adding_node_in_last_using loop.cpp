#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
struct node
{
       int val;
       node *ptr;
       }*head;
       
     int ll(int x, node * root)
      {
           
           
           if(root==NULL)
           { 
              node *p= new node;
           head=p;
           p->val=x;
           p->ptr=NULL;
           return 0;
            }
            while(root->ptr!=NULL)
            root=root->ptr;
           node *p= new node;
           p->val=x;
           p->ptr=NULL;
      root->ptr=p;
        return 0;   
           
         }
       
       int printlist(node *root)
       {
           while(root!=NULL)
           {
                            cout<<root->val<<endl;
                            root=root->ptr;
                            }
                            return 0;
       }
main()
{
      head=NULL;
     int val;
while(1)
{
        cin>>val;
        if(val==-1)
        break;
         ll(val,head);
          }
          
          printlist(head);

system("pause");
}
