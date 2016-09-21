#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[2];
     printf("Reddy\n");
    while(cin>>str && str!="  ")
    {
                    
                   
                   if(strcmp(str,"db")==0 || strcmp(str,"bd")==0 || strcmp(str,"pq")==0 ||strcmp(str,"qp")==0)
                   printf("Mirrored pair\n");
                   else 
                   printf("Ordinary Pair\n");
                   }
                   return 0;
}
