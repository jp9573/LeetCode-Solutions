class TreeNode:

    def __init__(self,val):
        self.val = val
        self.left = None
        self.right = None

def preorderTraversal(root):
    answer = []

    preorderTraversalUtil(root, answer)
    return answer

def preorderTraversalUtil(root, answer):

    if root is None:
        return 

    answer.append(root.val)

    preorderTraversalUtil(root.left, answer)

    preorderTraversalUtil(root.right, answer)

    return

root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

print(preorderTraversal(root))
