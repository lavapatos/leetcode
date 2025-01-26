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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) {return NULL;}
        if (head->val == val) {
            while (head && head->val == val) {head = head->next;}
        }
        if (!head || head->next == NULL) {return head;}
        ListNode* check = head;
        ListNode* desp = check->next;
        while (check && desp) {
            if (desp->val == val) {
                check->next = desp->next;
            }
            if (desp && desp->val != val) {check = check->next;}
            desp = desp->next;
        }
        return head;
    }
};