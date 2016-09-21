#include<iostream>
using namespace std;
main()
{
      char arr[100],q[2];
      cin>>arr;
      q[0]='0';
      q[1]='0';
      arr[strlen(arr)]='0';
      arr[strlen(arr)+1]='0';
      arr[strlen(arr)+2]='\0';
      for(int i=0;i<strlen(arr);i++)
      {
              if(i>0)
              {
                     q[1]=q[0];
                     q[0]=arr[i-1];
              }
              cout<<((int(q[0])-48)^(int(q[1])-48)^(int(arr[i])-48));
              cout<<((int(q[1])-48)^(int(arr[i])-48));
      }

system("pause");
}
