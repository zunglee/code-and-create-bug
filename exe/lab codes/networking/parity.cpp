#include<iostream>
using namespace std;
main()
{
      char arr[2][5]={"0000","0111"},str[5];
      for(int i=0;i<2;i++)
      {
              cout<<arr[i]<<"\n";
      }
      cin>>str;
      int flag=0;
      for(int i=0;i<2;i++)
      {
              if(strcmp(arr[i],str)==0)
              {cout<<"correct code\n";flag=1;}
      }
      int c;
      if(flag==0)
      {
                
                for(int i=0;i<2;i++)
                {
                        c=0;
                        for(int j=0;j<5;j++)
                        if(arr[i][j]!=str[j])
                        c++;
                        if(c==1)
                        {cout<<"corect code is "<<arr[i]<<"\n";flag=1;break;}
                }
                if(flag==0)
                cout<<"cant be corrected";
      }

system("pause");
}
