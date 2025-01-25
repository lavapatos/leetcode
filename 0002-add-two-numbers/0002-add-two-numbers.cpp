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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* resp = new ListNode(l1->val + l2->val);
        ListNode* check = resp;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 || l2) {
            if (l2 == NULL && l1 != NULL) {check->next = l1; break;}
            if (l1 == NULL && l2 != NULL) {check->next = l2; break;}
            ListNode* temp = new ListNode(l1->val + l2->val);
            check->next = temp;
            check = check->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        check = resp;
        while (check) {
            if (check->val > 9 && check->next == NULL) {
                check->val %= 10;
                ListNode* temp = new ListNode(1);
                check->next = temp;
            }
            else if (check->val > 9) {
                check->val %= 10;
                check->next->val++;
            }
            check = check->next;
        }
        return resp;
    }
};