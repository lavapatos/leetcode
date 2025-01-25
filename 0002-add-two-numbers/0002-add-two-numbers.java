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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if (l1 == null && l2 == null) {return null;}
        if (l1 == null) {return l2;}
        if (l2 == null) {return l1;}

        int countl1 = 0;
        int countl2 = 0;

        ListNode temp = l1;

        while (temp != null) {
            countl1++;
            temp = temp.next;
        }

        temp = l2;

        while (temp != null) {
            countl2++;
            temp = temp.next;
        }

        ListNode l3 = new ListNode();

        if (countl1 >= countl2) {
            l3 = l1;
            temp = l3;
            while (l2 != null) {
                temp.val += l2.val;
                temp = temp.next;
                l2 = l2.next;
            }
        }
        else {
            l3 = l2;
            temp = l3;
            while (l1 != null) {
                temp.val += l1.val;
                temp = temp.next;
                l1 = l1.next;
            }
        }
        temp = l3;
        while (temp != null) {
            if (temp.val > 9) {
                if (temp.next != null) {
                    temp.val %= 10;
                    temp.next.val += 1;
                }
                else {
                    temp.val %= 10;
                    ListNode aux = new ListNode(1);
                    temp.next = aux;
                }
            }
            temp = temp.next;
        }
        return l3;
    }
}