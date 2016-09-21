#include<iostream>
#include<string.h>
using namespace std;
 int main()
 {
     char a[1000];
     int i,word=0;
     while(1)
    { 
    gets(a);
      if((a[0]>=65 && a[0]<=90) || (a[0]>=97 && a[0]<=122))
     word++;
     int l=strlen(a);
     if(l==0)
     break;
     i=0;
     while(a[i]!='\0')
     {
    
     if (a[i]==32 )
     {

                  if((a[i+1]>=65 && a[i+1]<=90) || (a[i+1]>=97 && a[i+1]<=122))
                  { word+=1;
                  }
                  }
     i+=1;
     }
     cout<<word<<endl;
     word=0;
     }
    // system("pause");
     return 0;
     
     }
