#include<iostream>
using namespace std;
int removeElement(int* nums, int numsSize, int val) {
        int in =0;
        int ct = 0;
        int temp;
        for(int i = 0 ; i < numsSize ;i++){
            if(nums[i] == val){
                ct++;
                if(in == 0){
                    in =i;
                }
            }else{
                temp = nums[i];
                nums[i] = nums[in];
                nums[in] = temp;
                in++;
            }
        }
    return numsSize-ct;
    
}

int main(){

int a[] = {2,2,3};

int size = removeElement( a , sizeof(a)/sizeof(a[0]) , 2);
cout<<size<<endl;
for(int i=0 ;i< size ; i++){
cout<<a[i]<<" ";

}
cout<<endl;

}



