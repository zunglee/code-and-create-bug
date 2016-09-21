#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 8
#define M 2*N-1
#define MAX 99999999
 typedef struct 
{
 int wi;    
 char data;
 int Parent,Lchild,Rchild;
}huffm;
typedef struct  
{
 char bits[N+1];
 int start;
 char ch;
}ctype;

void Huffman_tree(huffm H[M+1])
{
 int i,j,p1,p2;
 int w,s1,s2;
 for(i=1;i<=M;i++)
 {
  H[i].wi=MAX;
  H[i].Parent=0;
  H[i].Lchild=H[i].Rchild=0;
 }
// printf(" weight:\n");
 for(i=1;i<=N;i++)
 {
  scanf("%d",&H[i].wi); 
 }

 for(i=N+1;i<=M;i++)
 {  
     p1=p2=0;                  
       s1=s2=MAX;             
     for(j=1;j<=M;j++)     
            if(H[j].Parent==0)
                if(H[j].wi<s1) 
                { 
                   s2=s1; 
                    s1=H[j].wi;
                    p2=p1; p1=j; 
                }
                else if(H[j].wi<s2) {s2=H[j].wi; p2=j;}  
        H[p1].Parent=H[p2].Parent=i; 
        H[i].Lchild=p1;
        H[i].Rchild=p2;
        H[i].wi=H[p1].wi+H[p2].wi;  
 }
 /*printf("Number\tParent\tLchild\tRchild\n");
 for(i=1;i<=M;i++)
 printf("%d\t%d\t%d\t%d\n",i,H[i].Parent,H[i].Lchild,H[i].Rchild);*/

}    
void Huffman_code(ctype code[N+1])
{
 int i,j,p,s;
 char c[N];
 huffm H[M+1];
 ctype md;
 printf("char:\n");
/* for(i=1;i<=N;i++)
 {
  scanf("%c",&c);
  H[i].data=code[i].ch=c;
 }
*/
 scanf("%s",c);
 for(i=1;i<=N;i++)
 H[i].data=code[i].ch=c[i-1];
 Huffman_tree(H);                  

 for(i=1;i<=N;i++)
 {
  md.ch=code[i].ch;
  md.start=N+1;
  s=i;
  p=H[i].Parent;  
  while(p!=0)
  {
   md.start--;
   if(H[p].Lchild==s)
    md.bits[md.start]='1';
   else
    md.bits[md.start]='0';
   s=p;
   p=H[p].Parent;
  }
  code[i]=md;
 }
 //printf("code:\n");
 for(i=1;i<=N;i++)
 printf("%c\t",code[i].ch);
 printf("\n");
 for(i=1;i<=N;i++)
 {
  for(j=code[i].start;j<=N;j++)
  printf("%c",code[i].bits[j]);
  printf("\t");
 }
 printf("\n");
}


main()
{ 
 {
 ctype code[N+1];
 Huffman_code(code);
system("pause");
 }

}
