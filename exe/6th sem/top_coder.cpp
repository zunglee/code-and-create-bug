#include<iostream>
#include<vector>
using namespace std;

class FoxAndGame{
public:
int countStars(vector <string> result)
{
int i,j,lv=result.size();
int sum=0;
for(i=0;i<lv;i++)
{
for(j=0;j<3;j++)
{
if (result[i][j]=='o')
sum++;
}}
int ans=sum;
return ans;
}
};
