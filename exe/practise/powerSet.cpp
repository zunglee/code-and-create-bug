#include<iostream>
#include<math.h>
using namespace std;

int boolArr[999999];

void populateBoolArr(int x){
int index = 0;  
while(x){
  boolArr[index++] = x%2;
x /=2;
  }




}



void printPowerSet(string str){

int  len  = str.length();
int ct = pow(2,len);
string powerStr ="" ;
for(int i=0;i<ct;i++){

 populateBoolArr(i);
 powerStr = "";
for(int j=0;j<len;j++){
     
if(boolArr[j] == 1){
    powerStr += str[j];
}
boolArr[j] = 0;

}

cout<<i+1<<".) "<<powerStr<<endl;

}

}



int main(){

string str="abcd";

cin>>str;


printPowerSet(str);

return 1;
}





