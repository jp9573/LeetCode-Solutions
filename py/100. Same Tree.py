# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def same(root1,root2):
    if root1 is None and root2 is None:
        return True
    if (root1 is None and root2 is not None)or (root1 is not None and root2 is None):
        return False
    return root1.val==root2.val and same(root1.left,root2.left) and same(root1.right,root2.right)
        
class Solution(object):
    def isSameTree(self, p, q):
        return same(p,q)
        
