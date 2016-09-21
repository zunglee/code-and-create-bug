#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a[5000][8];
int h[5000]={0};

void cal(int p,int k)
{
          for(int i=p;i<k;i++)
  	      {            int c=28;
			           for(int j=0;j<8;j++)
  	      			   {      for(int z=j+1;z<8;z++)
  	      			          {    if((==a[i][z])||(abs((a[i][j]-a[i][z])==(z-j)))) 
								         c--;    
		   		              }
	   		           }
	   		           h[i]=c;
	   		     
          }
}
void srt(int l)
{
 	 for(int i=0;i<l;i++)
 	 {    for(int j=i+1;j<l;j++)
 	      {  
                    if(h[i]<h[j])
 	           {        int z;
			   		    for(int p=0;p<8;p++)
			   		    {    z=a[i][p];
			   		    	 a[i][p]=a[j][p];
			   		    	 a[j][p]=z;
 		                }
 		                z=h[i];
 		                h[i]=h[j];
 		                h[j]=z;
			   }
	      }
     }
 }
int main()
{         srand(time(NULL));
		  int k;
 	 
 		  cin>>k;
 		  for(int i=0;i<k;i++)
 		  {    for(int j=0;j<8;j++)
 		      {
			   		   a[i][j]=rand()%8;
		              cout<<a[i][j]<<"\t";
		      }
		      cout<<"\n";
 		  }
 		  
		   cal(0,k);
          int l=k;          
          while(h[0]!=28)
          {     l=k;
		  		cout<<"  h  =\t"<<h[0]<<"\n";
		  		
		  		system("pause");
		  	
				for(int i=0;i<k;i++)
		  		{
		   		 		  for(int j=0;j<8;j++)
                          {     for(int p=0;p<8;p++)
                                {   if(p!=a[i][j])
                                    {
						  				for(int z=0;z<8;z++)
                               			  {    a[l][z]=a[i][z];
						   				  }
	   					                  a[l][j]=p;
						   				  l++;
			                         }
					            }
						  } 
		        }
				cal(k,l);
			
                srt(l);
		  }
	
 cout<<h[0]<<"\n";
 for(int i=0;i<8;i++)
 cout<<a[0][i]<<"\t";
 cout<<"\n";
 getch();
 return 0;
        
}
