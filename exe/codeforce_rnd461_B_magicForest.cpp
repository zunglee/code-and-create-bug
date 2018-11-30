#include<iostream>
using namespace std;

int func(){
int n;
int ct=0;
cin>>n;

for(int i=1;i<=n ; i++){

  for(int j=i+1 ; j<=n ; j++){
     for( int k=j+1 ; k<(i+j)  && k<=n;k++){
           if( (i^j^k) == 0){
ct++;
}
}   

}



}

return ct;



}


int main(){

cout<<func();

}

