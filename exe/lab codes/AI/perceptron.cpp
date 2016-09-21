#include<iostream>
#include<fstream>
#include<cmath>
#define Si(i) scanf("%d",&i)
#include<conio.h>
using namespace std;
int main(){
float w[4]={0};
float tot[4];
float ans=0;
float x;
float alpha=.007;

for(int epoch=0;epoch<100;epoch++){
ifstream fi("iris.txt");

for(int i=0;i<150;i++){
ans=0;
for(int i=0;i<4;i++){
fi>>tot[i];
ans += (tot[i]*w[i]);
}
fi>>x;

for(int i=0;i<4;i++)
w[i]+= (alpha * tot[i]* (x- ans));
}
}

for(int i=0;i<4;i++){
cout<<w[i]<<" ";
}

ifstream fi("iris.txt");

for(int j=0;j<150;j++){
ans=0;
for(int i=0;i<4;i++){
fi>>tot[i];
ans+= (tot[i]*w[i]);
}
fi>>x;

// if(abs(ans - (j/50)+1)heart)
cout<<"\n"<<ans;
}

getch();
return 0;
}
