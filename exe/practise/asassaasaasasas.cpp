#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
         int n;
         cin>>n;
         int a[n],val[n];
         for(int i=0;i<n;i++)
         {
		  		 cin>>a[i];
                 val[i]=0;
         }
         int to=0;
         for(int i=0;i<n;i++)
         {
	             int j=i;
	             int co=0;
	             while((a[j]>a[j+1])&&(j<n-1))
	             {        co++;
				          j++;  
				          
				 }
				 val[i]=1+co;
				 if((a[i]>a[i-1])&&(i!=0))
	             {    
				  			if(val[i]<=val[i-1])
							   {   val[i]=val[i-1]+1;
		   					   }			  
			     }
			//	 cout<<i<<"\t"<<val[i]<<"\n";
				
			     to+=val[i];
		 }
	     cout<<to<<"\n";
	     system("pause");
	     return 0;
}
