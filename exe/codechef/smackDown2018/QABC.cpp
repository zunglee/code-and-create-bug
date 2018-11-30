#include <iostream>
using namespace std;
unsigned int t,n, diff,diff1, diff2,diff3, a[999999] , b[999999];

void cal(){
cin>>n; 
for(int i=0;i<n;i++){
 cin>>a[i];
}
for(int i=0;i<n;i++){
 cin>>b[i];
b[i] = b[i]-a[i];
}
int flag = 1;




for(int i=0;i<n-2;i++){
   if(b[i] < 0){
   flag = 0;break;
}
if(b[i] == 0 ){
continue;
}
 
b[i+1] = b[i+1]- (b[i]*2);
b[i+2] = b[i+2]- (b[i]*3);
b[i] = 0;
}

for(int i=0;i<n;i++){
cout<<b[i]<<endl;
}
for(int i=0;i<n;i++){
if(b[i] !=0){
flag=0;break;
} 

}

if(flag ==1){
cout<<"TAK\n";

}else{
cout<<"NIE\n";
}

}


int main(){
cin>>t;
while(t--){
cal();


}

return 0;
}
