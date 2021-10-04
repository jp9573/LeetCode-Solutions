/*
156. Binary Tree Upside Down
Given a binary tree where all the right nodes are either leaf nodes with a sibling (a left node that shares the same parent node) or empty, flip it upside down and turn it into a tree where the original right nodes turned into left leaf nodes. Return the new root.

Example:

Input: [1,2,3,4,5]

    1
   / \
  2   3
 / \
4   5

Output: return the root of the binary tree [4,5,2,#,#,3,1]

   4
  / \
 5   2
    / \
   3   1
Clarification:

Confused what [4,5,2,#,#,3,1] means? Read more below on how binary tree is serialized on OJ.

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.

Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5
The above binary tree is serialized as [1,2,3,#,#,4,#,#,5].

Company: LinkedIn
*/

/*
Algorithm
For a root node, the goal is to turn its left child node into a root node, and its right child node into a left child node,

The original root node becomes a right child node. First, check whether this root node exists and whether it has a left child node. If these two conditions are not met, just return directly, no flip operation is required.

Call the recursive function on the left child node until it reaches the leftmost child node and start flipping. After flipping the leftmost child node, start to return to the previous left child node and continue flipping until the complete tree is flipped.
*/
//Code: 
public class Binary_Tree_Upside_Down {
    /**
      * Definition for a binary tree node.
      * public class TreeNode {
      *     int val;
      *     TreeNode left;
      *     TreeNode right;
      *     TreeNode(int x) { val = x; }
      * }
      */
    public class Solution {
        public TreeNode upsideDownBinaryTree(TreeNode root) {

            if (root == null) {
                return root;
            }

            return dfs(root, null);
        }

        private TreeNode dfs(TreeNode root, TreeNode parent) {

            if (root == null) {
                return root;
            }

            TreeNode newRoot = dfs(parent.left, root);
            newRoot.left = parent == null ? null : parent.right;
            newRoot.right = parent;

            return newRoot;
        }
    }

    public class Solution_iteration {
        public TreeNode upsideDownBinaryTree(TreeNode root) {

            if (root == null) {
                return root;
            }

            TreeNode current = root;
            TreeNode prev = null;
            TreeNode next = null;
            TreeNode tmp = null;

            while (current != null) {
                next = current.left;
                current.left = tmp;
                tmp = current.right;
                current.right = prev;
                prev = current;
                current = next;
            }

            return prev;
        }
    }
}