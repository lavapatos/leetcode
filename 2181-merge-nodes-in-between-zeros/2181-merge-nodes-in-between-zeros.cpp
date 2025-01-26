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
    ListNode* mergeNodes(ListNode* head) {
        long long sum = 0;
        ListNode* zeroI = head;
        ListNode* zeroD = head->next;
        ListNode* cola = head;
        while (zeroD != NULL) {
            if (zeroD->val == 0) {
                ListNode *nuevo = new ListNode(sum);
                cola->next = nuevo;
                cola = cola->next;
                zeroI = zeroD;
                zeroD = zeroD->next;
                sum = 0;
                if (zeroD == NULL) {break;}
            }
            sum += zeroD->val;
            zeroD = zeroD->next;
        }
        return head->next;
    }
};