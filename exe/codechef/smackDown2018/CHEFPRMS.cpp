#include <iostream>
using namespace std;

int pre[250];
int pro[250];


void cal(int n ){
    int y=n/2;
int res = 0;
for(int x=2 ; x<=y+1 ;x++){
     int diff = n-x;
     if(pro[diff] == 1 && pro[x] ==1){
res = 1;
break;
}
}

if(res ==1){
cout<<"YES\n";
}else{
cout<<"NO\n";
}


}

void preX(){

for(int x=2;x<=201;x++){
   if(pre[x] == -1){
     continue;
   }
pre[x] = 1;
   for(int y=x+x ; y<=201;y=y+x){
      pre[y] = -1;

}
}


for(int x=2;x<=200;x++){
    if(pre[x] != 1){
continue;
    }
   for(int y=x+1 ; y<=200 ;y++){   

   if(pre[y] !=1){
  continue;
}
   int prod = x*y;

   if(prod >201){
break;
}
    pro[prod] = 1;


}
}
/*
for(int x=2;x<=15;x++){
if(pro[x]==1){
cout<<x<<"\n";
}


}

*/


}







int main(){
int t,n;
cin>>t;
preX();
while(t--){
   cin>>n;
   cal(n);
}


return 0;

}
