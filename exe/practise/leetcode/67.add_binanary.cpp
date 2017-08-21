#include<iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int lena = a.length()-1;
        int lenb = b.length()-1;

if(lena==-1){

return b;
}if(lenb ==-1){

return a;
}
        string ansS="";
        int x , y , carrySum=0;
        while(lena >= 0 && lenb >=0){
            x = a[lena] - '0';
            y = b[lenb] - '0';
            

 if(x == 0 && y == 1){
x = 1; y=0;
}

// cout<<"\n x="<<x<<" y="<<y<<endl;

            if(y==1){
                if(carrySum){
                    ansS = "1" + ansS;
                }else{
                    carrySum = 1;
                    ansS = "0" + ansS;
                }
            }else if(x == 1){
                if(carrySum){
                    ansS = "0" + ansS;
                }else{
                    ansS = "1" + ansS;
                }
            }else{ if(carrySum){
                    ansS = "1" + ansS;
                }else{
                    ansS = "0" + ansS;
                }
            }
            lena--;lenb--;
            
        }

if(lena >=0){
     while(lena >=0){
      x = a[lena] - '0';
      if(carrySum == 1){
        if(x ==1){
         carrySum = 1;
         ansS = "0" + ansS;
        }else{
         carrySum = 0;
         ansS = "1" + ansS;
       }
      }else{
        if(x ==1){
         ansS = "1" + ansS;
        }else{
         ansS = "0" + ansS;
       }
      }    
lena--;
}

}

if(lenb >=0){
     while(lenb >=0){
      x = b[lenb] - '0';
      if(carrySum == 1){
        if(x ==1){
         carrySum = 1;
         ansS = "0" + ansS;
        }else{
         carrySum = 0;
         ansS = "1" + ansS;
       }
      }else{
        if(x ==1){
         ansS = "1" + ansS;
        }else{
         ansS = "0" + ansS;
       }
      }
lenb--;
}

}


 cout<<" carry out "<<carrySum<<endl;





if(carrySum){
            
        ansS = "1" + ansS;
        }


        
        return ansS;
        
        
    }
};






int main(){
Solution sol;

string s[8][2] = { {"0" , "0"} , {"1" , "0"},{"0" , "1"},{"1" , "1"},{"11" , "1"},{"11" , "0"},{"11" , "1"},{"111" , "10"} };
//string s[][2] = {{"0" , "1"}};

for(int i=0 ; i<8; i++){


cout<<s[i][0]<< " + \n"<<s[i][1]<<endl;
cout<<"-----------------------\n"<<sol.addBinary(s[i][0] ,s[i][1])<<"\n-----------------------"<<endl;
}
}







