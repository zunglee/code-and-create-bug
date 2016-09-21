#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
char arr[10];
void bin(int n)
{
     if(n<1)
     cout<<arr<<endl;
     else
     {
         arr[n-1]='0';
         bin(n-1); 
         arr[n-1]='1';
         bin(n-1);
     }
     
 }
main()
{
  //    int t;
//cin>>t;
//while(t--)
{
            int n;
            cin>>n;
            bin(n);
          }

system("pause");
}
