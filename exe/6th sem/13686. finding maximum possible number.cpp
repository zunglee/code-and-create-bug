#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[1000002], b[1000002];
int case1(int k, int x,int len)
{
    int z=x;
    for(int i=0;i<k;i++)
            { 
                   for(int j=z;j<len;j++)
                   {
                           if(a[i]==b[j])
                           {
                                        b[j]='f';
                                        break;
                                         
                                         }
                           }
            }
}
main()
{
      int t;
cin>>t;
while(t--)
{ 
          int n[10]={0};
            cin>>a;
            int len=strlen(a),k,g=0,count=0,till=0,fre=0;
            for(int i=0;i<len;i++)
            {
                    
                    n[a[i]-48]++;
                    if(a[i]>g)
                    {
                              g=a[i];
                             count=i; }
                             }
                             int cum[10]={0};
                             cum[0]=n[0];
                              for(int i=1;i<10;i++)
                              cum[i]=cum[i-1]+n[i];
                              
            scanf("%d",&k);
             for(int i=0;i<10;i++)
             {
                     if(cum[i]>k)
                     {till=i;
                     fre=cum[i];
                     break;}
                     }
            
            if(g==a[0])
            {
            //case1(k,0,len);
            { 
                   for(int i=1;i<len;i++)
                   for(int j=0;j<k;j++)
                   {
                           a[i]
                           }
            }
            else
            {
                        if ((count+1)>k)
                        {
                                    sort(a,a+count);
                                   //cout<<a<<" ";
                                  case1(k,0,len);
                        }
                        else 
             {
                 for(int j=0;j<count;j++)
                 b[j]='f';
                 sort(a+count+1,a+len);
                 //cout<<a<<endl;
            //     cout<<k-count-1<<endl<<count+1<<endl<<len-count-1;
              //   getch();
                 case1(k-count,count,len);
                 //cout<<b<<endl;
            
            }
            }
            for(int j=0;j<len;j++)
            {if(b[j]!='f')
            printf("%c",&b[j]);
             }
              printf("\n");
            }
           

//getch();
}
