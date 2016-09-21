#include<iostream>
#include<stdio.h>
using namespace std;
void sort(int*,int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int n,m,d,counter=0,i,arr[600];
              scanf("%d%d%d",&n,&m,&d);
              for(i=0;i<n;++i)
              scanf("%d",&arr[i]);
              sort(arr,n);
              //for(i=0;i<n;++i)
              //printf("%d ",arr[i]);
              if(arr[0]<d)
              printf("NO\n");
              else
              {
              for(i=0;i<n;i++)
              {
                 while(arr[i]>0)
                 {
                                arr[i]=arr[i]-d;
                                if(arr[i]>0)
                                counter++;
                                
                                }
                                }
                                
                  if(counter>=m)
                  printf("YES\n");
                  else
                  printf("NO\n");
                                                                }
                }
                return 0;
                
}
void sort( int *a,int lim)
{
     int temp=0,i,j;
     for(i=lim-1;i>=0;i--)
     {
        for(j=1;j<=i;++j)
        {
                         if(a[j-1]<a[j])
                         {
                            temp=a[j];
                            a[j]=a[j-1];
                            a[j-1]=temp;
                            }
                            }
                            }
}
                 
