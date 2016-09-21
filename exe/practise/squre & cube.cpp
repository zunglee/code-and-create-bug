#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std ;
 int cube(int a)
 {
     return a*a*a;
 }
 int sq(int a)
 {
      
     return a*a;
     }
int main ()
{
    int j,c,n;
    cout<<"u r great "<<endl<<"enter d no.";
    cin>>n;
    system("cls");
    cout<<endl<<"1.square"<<endl<<"2.cube"<<endl<<"3.Nothing"<<endl;
    cin>>c;
    switch (c)
    {
           case 1: j=sq(n);
                   cout<<j<<"  " <<"square funt is executed"<<endl;
                    break;
           case 2: j=cube(n);
                   cout<<j<<"   "<<"cube funt is executed"<<endl;
                    break;
           case 3: cout<<" okk  ";
           }
           system("pause");
    
    getch();
    return 0;
    
}

