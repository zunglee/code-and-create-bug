#include<iostream>
#include<vector>
using namespace std;

class PrimalUnlicensedCreatures
{
public:
int  maxWins(int initialLevel, vector <int> grezPower)
{
    int x= initialLevel,n=0,y=grezPower.size();
    
    sort(grezPower.begin(),grezPower.end());
    
    for(int i=0;i<y;i++)
    {
            if(x>grezPower[i])
            {
                              x+=grezPower[i]/2;
                              n++;
                              
            }
            
            }
return n;
}
};
