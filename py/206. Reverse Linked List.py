# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None
def solve(curr,prev,head):
    if curr is None:
        head=prev
        return head
    head=solve(curr.next,curr,head)
    
    curr.next=prev
    return head
class Solution(object):
    def reverseList(self, head):
        return solve(head,None,head)
        
