# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        q = []
        q.append((root, 0))
        m = {}
        while q:
            node, lvl = q.pop(0)
            if not node:
                continue
            if lvl in m:
                m[lvl].append(node.val)
            else:
                m[lvl] = [node.val]
                
            q.append((node.left, lvl+1))
            q.append((node.right, lvl+1))
        
        print(m)
        rs = []
        for ind, ls in m.items():
            rs.append(ls)
            
        return rs
