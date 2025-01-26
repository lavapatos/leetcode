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
    ListNode* middleNode(ListNode* head) {
        int pos = 0;
        ListNode* mitad = head;
        ListNode* count = head;
        while (count != NULL) {
            count = count->next;
            pos++;
        }
        for (int i = 1; i <= (pos/2); i++) {
            mitad = mitad->next;
        }
        return mitad;
    }
};