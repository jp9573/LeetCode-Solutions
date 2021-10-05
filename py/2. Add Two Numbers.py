class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        res = ListNode(0)
        res_tail = res
        carry = 0
        
        while l1 or l2 or carry:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0
            combined_digit = val1 + val2 + carry
            carry = combined_digit // 10
            
            res_tail.next = ListNode(combined_digit % 10)
            res_tail = res_tail.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

        return res.next
