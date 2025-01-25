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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if (head.next == null) {return null;}
        ListNode ant = new ListNode(0,head);
        ListNode check = head;
        ListNode delete = head;
        int count = 1;

        while (check.next != null) {
            if (count < n) {
                check = check.next;
                count++;
            }
            else {
                check = check.next;
                delete = delete.next;
                ant = ant.next;
                count++;
            }
        }
        if (count == n) {return head.next;}
        ant.next = delete.next;
        delete.next = null;
        return head;
    }
}