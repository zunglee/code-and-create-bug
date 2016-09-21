#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int m,i,d,goal=-99999,t;
    fscanf(stdin,"%d",&t);
    while(t--)
    {
              goal=0;
    fscanf(stdin,"%d",&m);
    int g[m];
    for(i=0;i<m;++i)
    fscanf(stdin,"%d",&g[i]);
    while(m--)
    {
              i=m;
              while(i--)
              {
                        d=g[m]-g[i];
                         
                        if(d>goal)
                               goal=d;           
                               }
                               }
                               if(goal>0)
                               fprintf(stdout,"%d\n",goal);
                               else fprintf(stdout,"UNFIT\n");
    }                          
                               
getch();                              
 return 0;
 }                          
