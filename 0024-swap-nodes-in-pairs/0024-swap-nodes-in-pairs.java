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
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null) {return head;}
        else {
            ListNode ant = head;
            ListNode desp = ant.next;
            ant.next = desp.next;
            desp.next = ant;
            head = desp;
            ant.next = swapPairs(ant.next);
        }
        return head;
    }
}