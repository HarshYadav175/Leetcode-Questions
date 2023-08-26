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
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* start = head;
        
        while(fast != NULL && fast->next != NULL){
             slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the second half
        slow = reverseList(slow);
        
        while(slow != NULL){
            if(start->val != slow->val){
                return false;
            }
            start = start->next;
            slow = slow->next;
        }
        
        return true;
    }

private:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = NULL;
        ListNode* current = head;
        ListNode* nextptr = NULL;
        
        while(current != NULL){
            nextptr = current->next;
            current->next = previous;
            previous = current;
            current = nextptr;
        }
            
        return previous;
    }
};
