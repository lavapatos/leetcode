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
    public int gcd(int a, int b) {  
        if (a == 0 || a == b) {return b;}
        if (b == 0) {return a;}

        if (a > b) {return gcd(a-b, b);}
        return gcd(a, b-a);
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        if (head == null || head.next == null) {return head;}

        ListNode ant = head;
        ListNode desp = head.next;

        while (desp != null) {
            ListNode temp = new ListNode(gcd(ant.val, desp.val));
            ant.next = temp;
            temp.next = desp;
            ant = desp;
            desp = desp.next;
        }
        return head;
    }
}