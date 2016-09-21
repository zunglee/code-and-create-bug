#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int n=8; 
int s[25];

int fitness(int st[],int p){

	int anti_fit=0;

		
		for(int j=p-1;j>=0;j--){
		 
		 if(st[p]==st[j])
		 { 
			 anti_fit++;
		 	 }
			else if (p-j==abs(st[p]-st[j]))
			{
				anti_fit++;
		 
			}
			
		
		
		}

	return anti_fit;
	}

void fun(int p){
	if(p==n)
	{for(int x=0;x<n;x++)
		cout<<s[x]+1<<" ";
		return; }
	s[p]++;
	while(s[p]<n)
	{
		if(fitness(s,p)==0)
	{	
		fun(p+1);
	
	  return;
	
	}else
	s[p]++;
		}
		
		//back
		s[p]=-1;
	
		fun(p-1);
		
	}

int main(){
	memset(s,-1,20);
	
	fun(0);
	system("pause");
	}
