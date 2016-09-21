#include<iostream.h>
#include<conio.h>
int main()
{
    int  a[1000][1000],m[3][3],plus,mult,div,sub1,sub2,sub3,g;
    /*for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
      cin>>a[i][j];
      */
      
      for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
      cin>>m[i][j];
      
      plus=m[0][1]+m[1][0]+m[1][1]+m[1][2]+m[2][1];
      if(plus>g)
      g=plus;
      mult=m[0][0]+m[0][2]+m[1][1]+m[2][0]+m[2][2];
      if(mult>g)
      g=mult;
      sub1=m[0][0]+m[0][1]+m[0][2];
      if(sub1>g)
      g=sub1;
      sub2=m[1][0]+m[1][1]+m[1][2];
      if(sub2>g)
      g=sub2;
      sub3=m[2][0]+m[2][1]+m[2][2];
      if(sub3>g)
      g=sub3;
      div=m[0][2]+m[1][1]+m[2][0];
      if(div>g)
      g=div;
      cout<<endl<<g;
      
      getch();
      return 0;
      }
