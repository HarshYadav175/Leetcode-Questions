/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
              // edge cases
        if(head==NULL || head->next==NULL) return true;
        
        //Step 1: Find middle of linked list
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next && fast->next->next) {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        //Step 2: Reverse second half of linked list
    slow->next=reverse(slow->next);
    slow=slow->next;
        
        //Step 3: Compare
while(slow!=NULL){
    if(head->val!=slow->val)return false;
    head=head->next;
    slow=slow->next;
}
        return true;
}   
    // function to reverse linked list
ListNode* reverse(ListNode* head){
    ListNode* current=head;
    ListNode* nextptr=NULL;
    ListNode*previous=NULL;
    
    while(current!=NULL){
        nextptr=current->next;
        current->next=previous;
        
        previous=current;
        current=nextptr;
    }
    return previous;
}
};