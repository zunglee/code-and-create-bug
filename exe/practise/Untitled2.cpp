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
      long long int n,odd=0,even=0,ans=0;
      int flag;
      while(1)
      {
scanf("%llu",&n);
odd= pow(9,((n-2)/2));
cout<<odd;
getch();
odd=odd-1;
odd=odd*9;
odd=odd/8;
odd=odd+1;
cout<<odd;
getch();
odd=odd*3;

flag=pow(-1,(n-1));
even= pow(9,((n-1)/2));
even=9*even;
even=even/8;
ans = flag*4*(even-odd);
cout<<ans<<endl;

}

getch();
}
