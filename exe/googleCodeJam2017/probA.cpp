#include<stdio.h>
#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>


int fast_int()
{
        int n = 0;
        char c = getchar();
        while (!('0' <= c && c <= '9'))
        {
                c = getchar();
        }
        while ('0' <= c && c <= '9')
        {
                n = (n<<3)+(n<<1) + c - '0';
                c = getchar();
        }
        return n;
}
int main()
{
    int t,n,k,i;
    char s[20001];
    t=fast_int();
    char cur;
    int countcur,flag,times;
    while(t--)
    {
        n=fast_int();
        k=fast_int();
        gets(s);
      /*  if(k==1)
        {
            printf("%d\n",n);
            continue;
        }*/
        i=0;
        flag=0;
        countcur=0;
        cur='\0';
        times=0;
        while(s[i]!='\0')
        {
            if(s[i]==cur)
            {
                countcur++;
 
            }
            else
            {
 
                times++;
                cur=s[i];
                countcur=1;
            }
             if(countcur==k)
                {
                    flag=1;
                    cur='\0';
                }
            i++;
        }
 
        if(flag)
        printf("%d\n",times);
        else
        printf("-1\n");
    }
    return 0;
}