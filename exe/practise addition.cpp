#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
main()
{
      int q;
      while(1)
      {
      cout<<"No. of question wanted to take  ";
      cin>>q;
      cout<<"\n get ready ";
      getch();
      system("cls");
      int ans[q],a,m,n;
      srand(time(NULL));
      for(int i=0;i<q;i++)
      {

              a=rand()%4;
              switch(a)
              {
                       case 0 :m=rand()%10;
                       cout<<i+1<<".   "<<m<<" - ";
                       n=rand()%10;
                       cout<<n<<endl;
                       ans[i]=m-n;
                       break;
                       
                       case 1:m=rand()%10;
                       cout<<i+1<<".   "<<m<<" + ";
                       n=rand()%10;
                       cout<<n<<endl;
                       ans[i]=m+n;
                       break;
                       
                       case 2: m=rand()%10;
                       cout<<i+1<<".   "<<m<<" * ";
                       n=rand()%10;
                       cout<<n<<endl;
                       ans[i]=m*n;
                       break;
                       
                       case 3: m=rand()%10;
                       cout<<i+1<<".   "<<m<<" / ";
                       n=rand()%10;
                       cout<<n<<endl;
                       if(n!=0)
                       ans[i]=m/n;
                       else ans[i]=99999999;
                       break;
                       }
        
}
for(int i=0;i<(q+2);i++)
{
        Sleep(1000);
   cout<<"Time Left :                   "<<q-i<<" \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  
        }
        
        system("cls");
        cout<<"\n\n\t\t\tTime's UP.........\n\n";
for(int i=0;i<q;i++)
cout<<ans[i]<<endl;
  getch();
  system("cls");
}
}
