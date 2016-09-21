#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
    int l,i,k;
    while(1)
    {       i=0,k=0;
            char ch[100000]={'\0'};
            cin.getline(ch,100000);
            l=strlen(ch);
            if(l==0)
            break;
            while(i<l)
            {
              if((65<=int(ch[i]) && int(ch[i])<=90) || (97<=int(ch[i]) && int(ch[i])<=122))
              {   
                   k++;
                   while((65<=int(ch[i]) && int(ch[i])<=90) || (97<=int(ch[i]) && int(ch[i])<=122))
                  { 
                   i++;  }  
                   }
               else
               i++; 
                  
           }
           cout<<k<<endl;
           }
           return 0;
           }

