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
int ank(int a,int b)
{ 
    if(a>1)
    {
    cout<<a<<"\t"<<b<<endl;
    ank(--a,b++);
    }
    if(a<10)
{ ank(a++,b--);

    cout<<a<<"\t"<<b<<endl;
    
}    
return 0;
}
    
    main()
{
ank(10,10);

getch();
}
