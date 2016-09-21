#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

int  fun (string s1 , string s2){
     
     int start=0;
     
for(int i=0 ; i <s1.length();i++)
{
        if(s1[i]==' ')
        {
                    char *c ;//= strstr(s2, s1.substr(start, i-1-start));
                    if( c != NULL) cout<< s1.substr(start, i-1)<<endl;
                    start = i+1;
                    }
        
        }     
     
     
     
     return 0;
     }

main()
{
      
     // fun("how are you" , "how is this");
      string s1= "howz are you";
      string s2="how";
    int found =  s1.find(s2);
                    if( found != string::npos) cout<< "found  "<<found;
                     
      
      
system("pause");
}
