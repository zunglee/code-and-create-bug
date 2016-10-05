#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int a[]= {-1, -1, -1,  0, 0,  1, 1, 1};
int b[]= {-1,  0,  1, -1, 1, -1, 0, 1};

void fillUp(int arr[][5], int visit[][5] , int r , int c , int x, int y){


visit[x][y] = 1;


	for(int  i = 0  ; i < 8 ; i++){
		if( x+a[i]  >=0  && x+a[i] < r && y+b[i] >=0 && y+b[i]<c &&  arr[x+a[i]][y+b[i]] && !visit[x+a[i]][y+b[i]]){   

			//	visit[a[i]][b[i]] = 1;
				fillUp(arr, visit , r,c , x+a[i] , y+b[i]);               
			}
		}
	

}


	int countNoOfIsland(int arr[][5] , int r, int c){
cout <<r <<c <<endl;
		int visit[5][5]  ;
		int ct = 0 ; 

 for(int i=0 ; i <r ; i++){
                        for(int j=0 ; j < c;j++){
visit[i][j] =0 ;
}}



		for(int i=0 ; i <r ; i++){
			for(int j=0 ; j < c;j++){
				if(arr[i][j] && !visit[i][j]){
					visit[i][j] = 1;
					ct++ ; 
					fillUp(arr, visit , r, c , i , j);  
				}            
			}
		}
return ct;
	}

	int main(){

		int M[5][5]= {  {1, 1, 0, 0, 0},
			{0, 1, 0, 0, 1},
			{1, 0, 0, 1, 1},
			{0, 0, 0, 0, 0},
			{1, 0, 1, 0, 1}
		};

		printf("Number of islands is: %d\n", countNoOfIsland(M,5 , 5));

		return 0;

	}








