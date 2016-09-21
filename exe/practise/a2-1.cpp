#include<iostream>
#include<cstring>
#include<string.h>
#include<process.h>
using namespace std;
 int n,flag,len;
      char str[100];
main()
{
     
      cin>>str;
      cin>>n;
      switch(n)
      {
     case 1:  for(int i=0;i<strlen(str);i++)
              if(str[i]=='1')
              cout<<"0";
              else
              cout<<"1";break;
      case 2: flag=1;
              cout<<flag;
              for(int i=0;i<strlen(str);i++)
              if(str[i])
              {
                        if(flag==1)
                        flag=-1;
                        else
                        flag=1;
                        cout<<flag;
              }
              else
              cout<<flag;
      break;
      case 3: for(int i=0;i<strlen(str);i++)
              {
                      flag=1;
                      if(str[i])
              {
                        if(str[i-1]==1 && i>0)
                        {
                                       if(flag==1)
                                       flag=-1;
                                       else
                                       flag=1;
                        }
                        cout<<flag;
              }
              else
              cout<<"0";
              }
      
    case 4:
      {
           
           
              for(int i=0;i<strlen(str);i++)
              {
                      flag=1;
                      if(str[i]==0)
              {
                        if(str[i-1]==1 && i>0)
                        {
                                       if(flag==1)
                                       flag=-1;
                                       else
                                       flag=1;
                        }
                        cout<<flag;
              }
              else
              cout<<"0";
              }
      }
    case 5:  for(int i=0;i<strlen(str);i++)
              {
                      if(str[i]==0)
                      cout<<"10";
                      else
                      cout<<"01";
              }
      break;
      case 6: flag=1;
              for(int i=0;i<strlen(str);i++)
              {
                      if(str[i]==0)
                      {
                                   if(flag==1)
                                   flag=-1;
                                   else
                                   flag=1;
                                   cout<<flag;
                                   if(flag==1)
                                   flag=-1;
                                   else
                                   flag=1;
                                   cout<<flag;
                      }
                      else
                      {
                          cout<<flag;
                          if(flag==1)
                                   flag=-1;
                                   else
                                   flag=1;
                                   cout<<flag;
                      }
              }
      break;
      case 7:  for(int i=0;i<strlen(str);i++)
              {
                      if(str[i]==0)
                      cout<<"10";
                      else
                      cout<<"01";
              }
      



}
          system("pause");
      }
