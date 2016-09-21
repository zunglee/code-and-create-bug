#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
 	    //cout<<" Enter message\n";
        string s;
		cin>>s;
		int val=4; 
        //cout<<" Enter no. of digits of CRC code\n";
		//cin>>val;
		val++;
		int l=s.size();
		int arr[val+1];
		for(int i=0;i<val;i++) 	  
        {     cout<<"enter coef  "<<i<<"\n";
              cin>>arr[val-1-i];
	    } 
		
		int co[l+val-1];
		for(int i=0;i<l;i++)
		      co[i]=s[i]-48;     
        for(int i=l;i<l+val-1;i++)
              co[i]=0;
        for(int i=0;i<l;i++)
        {
		 	  if(co[i]==1)
			  {    for(int y=0;y<val;y++)
			       {       co[i+y]=co[i+y]^arr[y];
		   		   }
 			  }	
		}
		cout<<"\n";
        for(int i=0;i<val+l-1;i++)
              cout<<co[i]<<" ";
        cout<<"\n";
        string e;
  	   cout<<" CRC\n";
       for(int y=0;y<val-1;y++)
               cout<<co[l+y];
       cout<<"\n";


        getch();
        return 0;
        
}
