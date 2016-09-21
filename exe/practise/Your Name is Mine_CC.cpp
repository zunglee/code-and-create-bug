#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
 char a[25002],b[25002];
      int t,x=0,flag;
//cin>>t;
while(1)
{
            cin>>a>>b;
            flag=0;
            x=0;
            int lena=strlen(a),lenb=strlen(b);
            if(lena>lenb)
            {
                         
                for(int i=0;i<lenb;i++)
                {
                        if(flag==1)
                        break;
                for(int j=x;j<lena;j++)
                {
                        if(b[i]==a[j])
                        {
                                      x=j+1;
                                      if(i==(lenb-1))
                                      flag=1;
                                      break;
                                      }
                                     // if(x==(lena-1))
                                      //flag=0;
                        }
                  } 
             }
      else
      {
          {
                for(int i=0;i<lena;i++)
                {
                        if(flag==1)
                        break;
                        for(int j=x;j<lenb;j++)
                {
                       if(i==lena)
                       {flag=1;
                       break;}
                        if(a[i]==b[j])
                        {
                                      x=j+1;
                                       if(i==(lena-1))
                                      flag=1;
                                      break;
                                      }
                              //        if(x==(lenb-1))
                                //      flag=0;
                        } 
             }
             }
      }
      if(flag==1)
      cout<<"YES\n";
      else
           cout<<"NO\n";  
}

system("pause");
}
