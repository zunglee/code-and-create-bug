#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<fstream>
main()
{
  //int  n;
  int temp=0,ct=0;
  ofstream ankitesh;
  ankitesh.open("list.txt");
  for(int n=4;n<103;n++)
  {
          ct=0;
          //system("pause");
          for(int i=n;i>4;i--)
  {
          //cout<<"done"<<endl;
          if(i>=10 && i%10==0)
          {
             temp++;
             int tn=i/10;
             while(1)
             {
                     if(tn>=10 && tn%10==0)
                     {
                               tn=tn/10;
                               temp++;
                               continue;
                               }
                               break;
             }
             ct+=temp;
             temp=0;
             continue;
             }
          if(i>=5 && i%5==0)
          ct++;
          
          }
          cout<<ct<<endl;
          ankitesh<<n<<". "<<ct<<endl;
          }
          ankitesh.close();
         
          ofstream done;
          done.open("list2.txt");
         for(int n=4;n<103;n++)
  {
          ct=0;
          temp=5;
          while(temp<=n)
          {
                       ct+=n/temp;
                       temp*=5;
                       }
                   done<<n<<". "<<ct<<endl;   
}
   done.close();       
system("pause");
}
