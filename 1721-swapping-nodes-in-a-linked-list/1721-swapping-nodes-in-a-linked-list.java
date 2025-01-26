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
    public ListNode swapNodes(ListNode head, int k) {
        if (head.next == null) {return head;}
        int i = 1, size = 0, value = 0;
        ListNode temp = head;
        ListNode first = new ListNode();
        while (temp != null) {
            size++;
            if (size == k) {
                value = temp.val;
                first = temp;
            }
            temp = temp.next;
        }
        size = size + 1 - k;
        temp = head;
        while (i <= size) {
            if (i == size) {
                first.val = temp.val;
                temp.val = value;
                break;
            }
            temp = temp.next;
            i++;
        }
        return head;
    }
}