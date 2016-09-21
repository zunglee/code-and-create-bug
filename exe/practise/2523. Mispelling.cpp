#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
#include<string.h>
main()
{
      int t,m,j=0;
      
        char a[100];
        cin>>t;
        while(t--)
        {
                  j++;
        cin>>m>>a;
        int n=strlen(a);
        cout<<j<<" ";
        for(int i=0;i<n;i++)
        {
                if(i!=(m-1))
                cout<<a[i];
                }
                cout<<endl;
        }
   
}
