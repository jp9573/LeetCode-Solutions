# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        t = head
        nthp = head
        i = 0
        prev = head
        while t is not None:
            i += 1
            t = t.next
            if i > n:
                prev = nthp
                nthp = nthp.next
        if nthp != head:
            prev.next = nthp.next
            nthp = None
        else:
            if head.next is not None:
                head = head.next
            else:
                head = None
        return head
            
