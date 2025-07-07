# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def gqd(a, b):
        if a == b:
            return a
        if (a>b):
            return gqd(a-b,b)
        return gqd(b-a,a)
class Solution(object):
        
    def insertGreatestCommonDivisors(self, head):
        if head.next == None:
            return head
        act = head
        sig = act.next
        while sig != None:
            act.next = ListNode(gqd(act.val,sig.val), sig)
            act = sig
            sig = sig.next
        return head

        