/*
Recursive Reverse String Algorithm

The Shortest function to reverse a string.

Written by: Sanchit Karve
            born2c0de AT hotmail.com
[born2c0de]
*/

#include <iostream>
#include<string.h>
using namespace std;

void ret_str(char* s)
{
    if(*s != '\0')
         ret_str(s+1);
string str;
    str=*(s);
    cout<<str;
}

int main()
{
    char sttr;
    cin>>sttr;
    ret_str(* sttr[0]);
    system("pause");
   return 0;
  
}
