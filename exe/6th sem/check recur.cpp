#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define f(a,b,c) for(b=a;b<c;b++)
int check(int n)
{
    if(n!=1)
    {
            cout<<"in recursion\n";
             check(n-1);
            }   
            cout<<"out of it\n";
            return 1;
    }
    main()
{
check(10);

getch();
}
