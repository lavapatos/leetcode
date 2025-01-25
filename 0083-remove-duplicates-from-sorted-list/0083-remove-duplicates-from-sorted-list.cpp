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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* izq = head;
        ListNode* der = head;
        ListNode* cola = head;

        if (head == NULL) {return head;}

        while (izq->val == der->val && der->next != NULL) {
            der = der->next;
            if (der->val > izq->val) {
                izq = der;
                cola->next = der;
                cola = cola->next;
            }
            else {
                cola->next = NULL;
            }
        }
        return head;
    }
};