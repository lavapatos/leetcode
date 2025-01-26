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
    public ListNode deleteMiddle(ListNode head) {
        if (head == null || head.next == null) {return null;}

        ListNode ant = new ListNode(0,head);
        ListNode desp = head;

        while (desp != null && desp.next != null) {
            ant = ant.next;
            desp = desp.next.next;
        }
        ant.next = ant.next.next;
        return head;
    }
}