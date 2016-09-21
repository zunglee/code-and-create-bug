#include<iostream>  
#include<fstream>
#include<string>
using namespace std;
main()
{
      char str[1000];
      int com=0,code=0,flag=0;
      ifstream in;
      in.open("inp.txt");
      while(!in.eof())
      {
                      in.getline(str,1000);
                      cout<<str<<"\n";
                          for(int i=0;i<strlen(str);i++)
                          if(str[i]=='"' && flag==0)
                          flag=1;
                          else if(str[i]=='"' && flag==1)
                          flag=0;
                          else if(str[i]=='/' && str[i+1]=='/' && flag==0)
                          {
                                         com++;break;
                          }
                          else if((str[i]==';' || str[i]=='#')&& flag==0)
                          code++;
                          else if((str[i]=='f' && str[i+1]=='o' && str[i+2]=='r') && flag==0)
                          {code++;
                          while(str[i]!=')')
                          i++;}
                          else if((str[i]=='w' && str[i+1]=='h' && str[i+2]=='i' && str[i+3]=='l' && str[i+4]=='e') && flag==0)
                          code++;
                          
      }
       cout<<"Comments :"<<com<<"\nCode :"<<code<<"\n";
                      

system("pause");
}
