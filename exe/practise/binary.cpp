#include<iostream>
#include<stdio.h>
#include<conio.h>
//#include<time.h>
using namespace std;
int binary(int,int,int);
int main()
{
    int ran,rang,value,val;
    scanf("%d",&ran,&rang);
    
    scanf("%d",&value);
    val=binary(ran,rang,value);
    printf("%d",&val);
    getch();
    return 0;
}
int binary(int frm,int to, int num)
{
    int check;
    check=frm+to/2;
    if(num==check)
    return check;
    else
    {
        if(num>check)
        binary(check,to,num);
        else
        binary(frm,check,num);
        }
}
                  
