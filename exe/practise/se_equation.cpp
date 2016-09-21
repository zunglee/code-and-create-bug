#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
main()
{
      int m,fact=1,x=1,n=0,c=0;
      float y;
      cout<<"enter the no  ";
      while(cin>>m)
      {
                   fact=1;
         while(m)
       {
                 fact*=m;
                 m--;
                 }
                 x=1;
                 n=0;
                 c=0;
          while(1)
          {
             y= (x*fact*1.0)/(x-fact);
             if((y==(int)y))
            {
                     n++;
                    cout<<x<<"   "<<y<<endl;
                     }
             x++;
             c++;
             if(c>99999999)
             break;
                  }
             cout<<n<<endl;               
                  } 
  getch();
}
