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
        node *lft;
        node *ryt;
        };
        
       int bt(node *temp, node *root)
       {
          
           if(root->val >= temp->val )
           {
                        if(root->lft==NULL)
                            {
                                           root->lft=temp;
                   
                             }
                             else bt(temp,root->lft);               
                        }
               if(root->val < temp->val)
               {
                            if(root->ryt ==NULL)
                            {
                                         root->ryt=temp;
                                         }
                                         else bt(temp,root->ryt);
                            }         
                        
           return 0;
       }
       int inorder(node *root)
       {
           if(root == NULL)
           return 0;
           inorder(root->lft);
           cout<<root->val<<endl;
           inorder(root->ryt);
           
       }
       
main()
{
      node *root=new node;
      int x;
cout<<" Enter root value";
cin>>x;
root->val=x;
root->ryt=root->lft=NULL ;
while(1)
{
          cin>>x;
          if(x==-1) break;
          node *temp=new node;
          temp->val=x;
          temp->ryt=temp->lft=NULL;
          //system("pause");
          bt(temp,root);
          
          }
          inorder(root);
          cout<<"done";
system("pause");
}
