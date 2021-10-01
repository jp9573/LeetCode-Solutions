class BinaryTree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


    def print_tree(self):
        if self.left:
            return str(self.data) + " " + self.left.print_tree()
        elif self.right:
            return str(self.data) + " " + self.right.print_tree()
        return str(self.data)

tree0 = BinaryTree(1)
tree0.left = BinaryTree(2)
tree0.left.left = BinaryTree(4)
tree0.left.right = BinaryTree(5)

tree0.right = BinaryTree(3)
tree0.right.left = BinaryTree(6)
tree0.right.right = BinaryTree(7)

# print(tree0.data)
print(tree0.print_tree())
