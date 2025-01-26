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
    int gcd(int a, int b) {  
        if (a == 0 || a == b) {return b;}
        if (b == 0) {return a;}

        if (a > b) {return gcd(a-b, b);}
        return gcd(a, b-a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) {return head;}

        ListNode *ant = head;
        ListNode *desp = head->next;

        while (desp) {
            if (ant->val == desp->val || desp->val % ant->val == 0) {
                ListNode *temp = new ListNode(ant->val);
                ant->next = temp;
                temp->next = desp;
            }
            else if (ant->val % desp->val == 0) {
                ListNode *temp = new ListNode(desp->val);
                ant->next = temp;
                temp->next = desp;
            }
            else {
                ListNode *temp = new ListNode(gcd(ant->val, desp->val));
                ant->next = temp;
                temp->next = desp;
            }
            ant = desp;
            desp = desp->next;
        }
        return head;
    }
};