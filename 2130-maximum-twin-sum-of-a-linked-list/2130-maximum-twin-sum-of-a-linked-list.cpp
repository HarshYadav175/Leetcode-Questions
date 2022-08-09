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
    ListNode* reverse(ListNode* head) {
        ListNode *prv = nullptr, *nxt;
        while(head) {
            nxt = head->next;
            head->next = prv;
            prv = head;
            head = nxt;
        }
        return prv;
    }
    int pairSum(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        int ans = 0;
        while(slow) {
            int sum = slow->val + head->val;
            ans = max(ans, sum);
            slow = slow->next;
            head = head->next;
        }
        return ans;
    }
};