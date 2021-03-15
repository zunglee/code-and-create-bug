#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class sol {

	public :
		 int maximum69Number (int num) {
        int nn = num;
        vector<int> n;
        while(num){
            int d = num%10;
            num /=10;
            n.push_back(d);
        }
        num = nn;
        reverse(n.begin() , n.end());
        
        int i=0 , j= n.size()-1;
            while(n[i] != 6 && i<j){
                i++;
            }
            while(n[j] != 9 && i< j){
                j--;
            }
        
         if(i < n.size()){
            n[i] = 9;
        }
        int newN = 0;
        for(int i=0 ; i< n.size() ; i++){
            newN = newN*10 + n[i];
        }
        
        return newN > num ? newN : num;
        
    }

};

int main(){
	sol s ;// new sol();
	cout<<s.maximum69Number(99);
return 0;
}


