#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct node{        // define node
       int val;
       node *next;
       };
       
struct node *create_node(struct node *head , int data)    // define linked list  and add into front
{
       struct node *p=(node*)malloc (sizeof(node));
       p->val=data;
       p->next=head;       //    
       
       return p;
       }
      
int printlist(struct node *head)
{
    while(head!=NULL)
    {
                   cout <<head->val<<"->";
                     head=head->next;
                     }
                     cout<<"\b\b";
                     return 1;
}       

int findn(node *head,int n)
{
int i=1;
while(i!=n && head!=NULL)
{head=head->next;
i++;}
cout<<head->val;
return 1;    
}

main()
{
      struct node *root=NULL;
      int data; // to stop enter 707
      cin>>data;
      while(data!=707)
      {
                      root= create_node(root , data);
                      cin>>data;
                      }
                      int n;
                      cin>>n;
                      findn(root,n);
//printlist(root);
system("pause");
}
