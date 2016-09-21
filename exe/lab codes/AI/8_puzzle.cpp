#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
# define fi(i,a,b) for(int i=a;i<b;i++)
# define fj(j,c,d) for(int j=c;j<d;j++)
int in[3][3],g[3][3],c=0;
main()
{
       
       cout<<"initial state\n";
       fi(i,0,3)
       fi(j,0,3)
       cin>>in[i][j];
       cout<<"\n Goal state\n";
         fi(i,0,3)
       {cout<<endl;
       fj(j,0,3)
       cin>>in[i][j];cout<<"\t";
       }
       
       system("cls");
    cout<<"initial state\n";
     fi(i,0,3)
       {cout<<endl;
       fj(j,0,3)
       {cout<<in[i][j];
       cout<<"\t";
       }
       } 
  getch();
}
