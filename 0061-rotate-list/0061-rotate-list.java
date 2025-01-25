/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || k == 0) {
            return head;
        }
        ListNode check = head;
        int largo = 1;
        while(check.next != null) {
            check = check.next;
            largo++;
        }

        check.next = head;
        k %= largo;

        for(int i = 0; i < largo - k; i++) {
            check = check.next;
        }
        
        head = check.next;
        check.next = null;
        return head;
    }
}