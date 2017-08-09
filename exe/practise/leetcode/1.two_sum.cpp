#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
     
     void printVectorPair( vector<pair<int, int> >& arr){


int len  = arr.size();    
  for(int i=0 ; i <len ; i++){

         cout<<   arr[i].first <<" ";
        }
       cout<<endl;

 for(int i=0 ; i <len ; i++){

         cout<<   arr[i].second <<" ";
        }
       cout<<endl;

}

     int partition( vector<pair<int, int> >& arr , int start , int end){
        
        int pivot = start;
        int left = start;
        int ryt = end;
        pair <int , int > temp;
       while(left <= ryt){
           while( arr[left].first <= arr[pivot].first){
               left++;
           }
           
           while( arr[ryt].first > arr[pivot].first){
               ryt--;
           }
          
           if(left < ryt){
               temp = arr[left];
               arr[left] = arr[ryt];
               arr[ryt] = temp;
           }
           
           
       }
        
        temp = arr[ryt];
        arr[ryt] = arr[pivot];
        arr[pivot] = temp;
        return ryt;
        
        
    }
 void quickSort( vector<pair<int, int> >&arr , int start , int end){
        
        if(start <=end){
            int pivotIndex = partition(arr , start , end);
            quickSort(arr , start , pivotIndex -1);
            quickSort(arr , pivotIndex+1 , end);
        }
        
    }

    vector<int> twoSum(vector<int>&arr, int k) {
        int len = arr.size(); ;
        vector<int> ans;
        
        vector<pair<int, int> > newArr;
        pair<int,int> p;
        for(int i=0 ; i <len ; i++){
            p = make_pair(arr[i],i); 
            newArr.push_back(p);
        }


// inbuilt sort function
      sort(newArr.begin() , newArr.end());
// my funciton to quicksort
     //  quickSort(newArr,0,len-1);
       printVectorPair(newArr);
 
int left = 0;
int ryt= len-1;


while(left < ryt){
int sum = newArr[left].first + newArr[ryt].first;

  if(sum == k){
	  ans.push_back(newArr[left].second); 
  	  ans.push_back(newArr[ryt].second); 
           break;
  } else if (sum > k){
    ryt--;
	}else{
 	 left++;
	}
}


/*
  using built in function qort
*/

       /* 
       // sorting changes the index position 
        sort(arr.begin() , arr.end());
        int sum =0;
        int i =0 , j= len-1;
        while( i< j){
            sum = arr[i]+arr[j];
            
            if(sum == k){
                ans.push_back(h[arr[i]]);
                ans.push_back(h[arr[j]]);
                break;
            }else if(sum > k){
                j--;
            }else i++;
        }
        */
        
        /** brute force O(n^2)
        for(int i=0 ; i <len ; i++){
            for(int j=i+1 ; j <len ; j++){
                if( arr[i]+arr[j] == k){
                   ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        */
        
        return ans;
    }
    
    
    
};

vector<int> getDummyVector(){
int arr[] = { 3,3};
int len = sizeof(arr)/sizeof(arr[0]);
vector<int>temp;
for(int i=0 ; i < len ; i++){
    temp.push_back(arr[i]);
}
return temp;

}



int main(){

Solution sol;
 vector<int> temp = getDummyVector();
 int x =6;
temp = sol.twoSum( temp , x);

cout<<endl<<temp[0]<<" " <<temp[1];


}




