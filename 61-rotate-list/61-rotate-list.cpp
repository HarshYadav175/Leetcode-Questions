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
ListNode* rotateRight(ListNode* head, int k) {
    if(!head||!head->next) return head;
    
    ListNode* slow, * fast;
    int len=0;
    
    for(ListNode* curr=head; curr ; curr=curr->next)
        len++;
		
    for(int i=0;i<(k%len);i++){
        slow=head;
        fast=head->next;
        
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
    }
    return head;  
}
};