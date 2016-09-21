#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int r[314160];
long long int c[314160];
int main() {
int n;
int q;
int a,x;
char s[30];
scanf("%d",&n);
for(int i=0;i<100;i++)
{
        int l;
        l+=1;
        l-=1;
        l+=1;
        l-=1;
        }
scanf("%d",&q);
for(int i=0;i<q;i++){

scanf("%s %d %d",s,&a,&x);
if(strcmp("RowAdd",s)==0)
{r[a-1]+=x;
}
else
{c[a-1]+=x;
}

}

long long int mx1=-1;
long long int mx2=-1;
for(int i=0;i<n;i++){
mx1=max(mx1,r[i]);
mx2=max(mx2,c[i]);

}
printf("%lld\n",mx1+mx2);
return 0;
}
