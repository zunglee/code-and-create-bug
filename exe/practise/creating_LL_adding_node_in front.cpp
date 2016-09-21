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
       
      node * ll(int x, node * root)
      {
           node *p= new node;
           p->val=x;
           p->ptr=root;
           return p;
           
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
     int val;
while(1)
{
        cin>>val;
        if(val==-1)
        break;
        head= ll(val,head);
          }
          
          printlist(head);

system("pause");
}
