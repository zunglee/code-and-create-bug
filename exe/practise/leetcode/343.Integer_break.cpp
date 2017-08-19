#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        
        int dp[59] = {0};
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        int start = 0;
        int maxi = 0;
        
        for(int i=3 ; i<59;i++){
             
            start = floor(i/2);
            maxi =0;
            for(int j=start ; j< i ;j++){
               int max1 =max(dp[j] * dp[i-j] , dp[j] * (i-j));
              int max2 = max(j*dp[i-j] , j * (i-j));
                maxi = max(maxi , max(max1 , max2));
            }
            dp[i]= maxi;            
        }
        
        return dp[n];
        
        
        
    }
};

int main(){

Solution  sol;

cout<<sol.integerBreak(12);


}



