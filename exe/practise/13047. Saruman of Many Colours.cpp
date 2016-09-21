#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
main()
{
      int t;
cin>>t;
while(t--)
{
          int n,k;
          scanf("%d%d",&n,&k);
char input[n+1];
input[n]='!';
//for(int i=0;i<n;i++)
scanf("%s",&input);

//int len=strlen(input);
int output[n],ct=0,glb=0;

for(int i=0;i<n;i++)
{
        if(input[i]==input[i+1])
        {
                               
                                output[i]=0;
                                ct++;
                                 glb=max(glb,ct);
                                  
                                if(ct==k)
                                {
                                         glb=max(glb,ct);
                                        output[i]=1;
                                        ct=0; }
                                }
        else
        {
            output[i]=1;
            ct=0;
        }
        
        }
       
        int sum=0,flag=0;
        if(glb==(k-1) || glb==k)
         {
                 for(int i=0;i<n;i++)
        {
                if (output[i]==k)
                flag=1;
                sum+=output[i];
        
                }
                
        printf("%d\n",sum);
                } 
        else
       printf("-1\n");
        
}

system("pause");
}
