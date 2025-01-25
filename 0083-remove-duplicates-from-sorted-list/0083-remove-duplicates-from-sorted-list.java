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
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null || head.next == null) {return head;}
        ListNode izq = head;
        ListNode der = head;
        ListNode cola = head;
        
        while (izq.val == der.val && der.next != null) {
            der = der.next;
            if (der.val > izq.val) {
                izq = der;
                cola.next = der;
                cola = cola.next;
            }
            else {cola.next = null;}
        }
        return head;
    }
}