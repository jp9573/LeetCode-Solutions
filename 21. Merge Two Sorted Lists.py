# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        ls = []
        
        while l1 is not None:
            ls.append(l1.val)
            l1 = l1.next
        
        while l2 is not None:
            ls.append(l2.val)
            l2 = l2.next
            
        if not ls:
            return None
        
        ls.sort()
        n = ListNode(ls[0])
        t = n
        for num in ls[1:]:
            t.next = ListNode(num)
            t = t.next
        return n
