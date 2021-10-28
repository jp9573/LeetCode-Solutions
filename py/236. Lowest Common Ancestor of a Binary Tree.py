def lowestCommonAncestor(self, root, p, q):

    if not root: return None
	
    if root == p or root == q: return root
	
    l = self.lowestCommonAncestor(root.left, p, q)
    r = self.lowestCommonAncestor(root.right, p, q)
	
    if l and r:
        return root
    else: return l if l else r
