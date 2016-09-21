#include<iostream.h>
using namespace std;
int main()
{
    int k,t,flag;
    char  c[100];
    cin>>t;
    while(t--)
    {
              cin>>k>>c;
    k+=47;
    size_t len = strlen(c);
    
     if((c[0]!=c[len-1]) || ((c[0]=='?') && (c[len-1]=='?')))
     {
                         
                       for(int i=0;i<len;++i)
                       {
                               if(c[i]=='?')
                               {
                                            flag=0;
                                            for(int j=48;j<=k;++j)
                                            {
                                                    if((j!=c[i-1])&& (j!=c[i+1]))
                                                    {
                                                                    c[i]=j;
                                                                    flag=1;
                                                                    break;
                                                                    
                                                                    }
                                                    }
                                                    c[len]=c[0];
                                            }
                               }
                       
                       
    if(flag!=0)                       
    { 
    for(int i=0;i<len;++i)
    cout<<c[i];
    }
    else cout<<"NO";
    cout<<endl;
}
    else cout<<"NO"<<endl;
    
    
}
    system("pause");
    return 0;
}
