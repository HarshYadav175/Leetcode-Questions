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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* previous = NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        
        if(head->next==NULL)
            return NULL;
        
        while(fast && fast->next){
            previous= slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        previous->next = slow->next;
        return head;
        
    }
};