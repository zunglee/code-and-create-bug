#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
  //    int t;
//cin>>t;
std::string str,subs;
getline(cin,str);
getline(cin,subs);
int len = str.size();
int found=str.find(subs);
if(found!=string::npos)
cout<<found<<"found";
else cout<<"Not found";


system("pause");
}
// int found=str.find(subs,found+1,sizeof(subs))
