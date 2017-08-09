#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carrySum =0;
        int sum =0;
        ListNode *ansHead = NULL , *current = NULL;
            
                    
        while(l1 && l2){
        sum = l1->val + l2->val + carrySum;
        carrySum = sum/10;
        sum = sum%10;    
            
            
            if(ansHead){
                current->next = new ListNode(sum);
                current = current->next;
            }else{
                ansHead = new ListNode(sum);
                current = ansHead;
            }
            
            l1 = l1->next;
            l2 = l2->next;
            
        }
        
        if(l1 == NULL){
            
            while(l2){
                sum = carrySum + l2->val;
                carrySum = sum/10;
                sum = sum%10;
                
                current->next = new ListNode(sum);
                current = current->next;
                l2 = l2->next;
            }
            
        }
        if(l2 == NULL){

        while(l1){
            sum = carrySum + l1->val;
            carrySum = sum /10;
            sum = sum%10;
            current->next = new ListNode(sum);
            current = current->next;
                l1 = l1->next;
        }
            
        }
        
        if(carrySum !=0){
             current->next = new ListNode(carrySum);
        }
        
        
        return ansHead;
        
    }
};
