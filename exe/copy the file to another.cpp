 #include<stdio.h>
 #include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
  FILE *p,*q;
  char file1[20],file2[20];
  char ch;
  printf("\nEnter the source file name to be copied:");
  gets(file1);
//  getchar();
  p=fopen(file1,"r");
  if(p==NULL){
  
      printf("cannot open %s",file1);
      exit(0);
  }
  printf("\nEnter the destination file name:");
  gets(file2);
  q=fopen(file2,"w");
  if(q==NULL){
      printf("cannot open %s",file2);
      getchar();
      exit(0);
  }
  while((ch=getc(p))!=EOF)
      putc(ch,q);
  printf("\nCOMPLETED");
  fclose(p);
  fclose(q);
 return 0;
}
