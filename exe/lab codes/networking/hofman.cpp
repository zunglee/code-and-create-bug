#include<iostream>
#include<fstream>
using namespace std;

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
