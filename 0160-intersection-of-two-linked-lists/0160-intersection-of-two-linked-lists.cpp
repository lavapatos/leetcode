/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set <ListNode*> p;
        ListNode *check = headA;
        while (check != NULL) {
            p.insert(check);
            check = check->next;
        }
        check = headB;
        while (check != NULL) {
            if (p.find(check) != p.end()) {return check;}
            check = check->next;
        }
        return NULL;
    }
};