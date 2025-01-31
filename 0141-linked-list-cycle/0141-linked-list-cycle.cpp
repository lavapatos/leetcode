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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {return false;}
        unordered_set <ListNode*> esta;
        while (esta.find(head) == esta.end()) {
            if (head->next == NULL) {break;}
            esta.insert(head);
            head = head->next;
        }
        return (esta.find(head) != esta.end());
    }
};