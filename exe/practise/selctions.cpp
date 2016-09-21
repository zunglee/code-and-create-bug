#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int* ,int*);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
   int iPos,flag=0,a[n],i;
int iMin;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for (iPos = 0; iPos < n; iPos++) {
    
    iMin = iPos;
    
    for (int i = iPos+1; i < n; i++) {
      
        if (a[i] < a[iMin]) {
            
            iMin = i;
        }
    }
     if ( iMin != iPos ) {
        swap(&a[iPos], &a[iMin]);
        flag++;
    }
}

printf("%d\n",flag);
}
return 0;
}
void swap(int *a,int *b)
{
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}
