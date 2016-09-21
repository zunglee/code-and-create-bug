#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<stack>
using namespace std;
int path[10][10],n,s,p=0,d[10],q[10],pre[10],temp,des,src=0;

main()
{
      ifstream in,in2;
      n=9;
      cout<<"\t---GPS Simulation---\n\n\n";
      
      in.open("city.txt");
      string name[10];
      for(int i=0;i<n;i++)
      in>>name[i];
      in.close();
      
      cout<<endl;
      for(int i=0;i<n;i++)
      cout<<i<<" "<<name[i]<<"\n";
      
      in2.open("dis.txt");
      for(int i=0;i<n;i++)
      {
              for(int j=0;j<n;j++)
                 {
                 in2>>path[i][j];
                 cout<<path[i][j]<<" ";
                 }
      cout<<"\n";
      }
      
      d[0]=0;
      pre[0]=0;
      for(int i=1;i<n;i++)
      {
              d[i]=INT_MAX;
              pre[i]=i;
              }
      q[p++]=0;
      /*for(int i=0;i<n;i++)
      {for(int j=0;j<n;j++)
      cout<<path[i][j]<<" ";
      cout<<"\n";}*/
      while(p>0)
      {
                temp=q[--p];
                //p=p-1;
                for(int i=0;i<n;i++)
                if(path[temp][i]!=-1)
                if(d[i]>d[temp]+path[temp][i])
                {
                                              d[i]=d[temp]+path[temp][i];
                                              q[p++]=i;
                                              pre[i]=temp;
                sort(q,q+p-1);
                //for(int j=p-1;j>0;j--)
                //if(q[j]>q[j-1])
                //swap(q[j],q[j-1]);
                //cout<<"*"<<q[p-1];
                }
      }
      /*for(int i=0;i<n;i++)
      cout<<d[i]<<" ";    
      cout<<"\n";*/
      stack<int> stk;
      while(1)
      {
          cout<<"\nEnter the Destination ???\n";
          cin>>des;
          while(pre[des]!=des)
          {
                              stk.push(des);
                              des=pre[des];
          }
          stk.push(src);
          while(!stk.empty())
          {
                             cout<<name[stk.top()]<<"-->";
                             stk.pop();
          }
          cout<<"\n";
      }
      system("pause");
}
