#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int a[]= {-1, -1, -1,  0, 0,  1, 1, 1};
int b[]= {-1,  0,  1, -1, 1, -1, 0, 1};

int Col ;
int arr[999][999];
int visit[999][999];
void printArr(int *array ,int R, int C){
	for(int i= 0 ; i < R ;i++){
		for(int j=0 ; j<C ; j++){
			cout<<array[i*R + j]<<" ";
		}
		cout<<endl;
	}
}


void fillUp(  int x, int y , int *ct,int r, int c ){


	visit[x][y] = 1;
	*ct +=1 ;

	for(int  i = 0  ; i < 8 ; i++){
		if( x+a[i]  >=0  && x+a[i] < r && y+b[i] >=0 && y+b[i]<c &&  arr[x+a[i]][y+b[i]]&& !visit[x+a[i]][y+b[i]]){   
			fillUp( x+a[i] , y+b[i]  ,ct ,r,c);               
		}
	}


}

/*
int countNoOfIsland(int r , int c , int arr[][c]){
	int ct = 0 ; 
	int *visit = (int *)calloc(r*c ,  sizeof(int));
	int maxCell = -1 ;
	for(int i=0 ; i <r ; i++){
		for(int j=0 ; j < c;j++){
			if(arr[i][j] && !visit[i*r + j]){
				visit[i*r + j] = 1;					 
				fillUp(r,c,arr, visit ,  i , j , &ct);
				//				cout <<"\n\n\n-----\n";int x ; printArr(visit , r, c);cout<<endl<<ct ;cin >>x ;                                       
				maxCell = max(maxCell,ct);
				ct = 0;
			}            
		}
	}
	return maxCell;
	return 0;
}
*/

int main(){
	int R,C ;
	cin>>R>>C;
//	int arr[R][C];
	for(int i=0 ; i <R ; i++){
		for(int j=0 ; j < C;j++){
			cin>>arr[i][j];	
visit[i][j] = 0 ;
		}
	}
  int ct = 0 ;
int r=R , c=C;
      //  int *visit = (int *)calloc(r*c ,  sizeof(int));
        int maxCell = -1 ;
        for(int i=0 ; i <r ; i++){
                for(int j=0 ; j < c;j++){
                        if(arr[i][j] && !visit[i][j]){
                                visit[i][j] = 1;
                                fillUp(  i , j , &ct , r,c);
                                //                              cout <<"\n\n\n-----\n";int x ; printArr(visit , r, c);cout<<endl<<ct ;cin >>x ;                                       
                                maxCell = max(maxCell,ct);
                                ct = 0;
                        }
                }
        }
cout <<maxCell ;
//	cout<<countNoOfIsland(R,C , arr);


	return 0;

}


