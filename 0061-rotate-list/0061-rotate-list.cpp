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
        if (!head || !head->next) {return head;}
        ListNode* contador = head;
        int count = 0;
        while (contador) {
            contador = contador->next;
            count++;
        }
        if (count < k) {k %= count;}
        for (int i = 0; i < k; i++) {
            ListNode* anterior = head;
            ListNode* despues = head->next;
            while (despues->next) {
                anterior = anterior->next;
                despues = despues->next;
            }
            despues->next = head;
            anterior->next = NULL;
            head = despues;
        }
        return head;
    }
};