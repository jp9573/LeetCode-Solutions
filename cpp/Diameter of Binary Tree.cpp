Link to problem: 

https://leetcode.com/problems/diameter-of-binary-tree/


Link of Solution:
https://leetcode.com/problems/diameter-of-binary-tree/discuss/1461590/traversing-all-subtree-depth-cpp-soultion

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int height_of_subtree(TreeNode* node)
{
    if(node==NULL)
    {
        return 0;
    }
    return 1+max(height_of_subtree(node->left),height_of_subtree(node->right));
}
void preorder(TreeNode* root,int &mx)
{
    int height=0;
    if(root==NULL)
    {
        return;
    }
    if(root->left!=NULL)
    {
        height+=height_of_subtree(root->left);
    }
    if(root->right!=NULL)
    {
        height+=height_of_subtree(root->right);
    }
    mx=max(mx,height);
    preorder(root->left,mx);
    preorder(root->right,mx);
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int max_height=0;
        preorder(root,max_height);
        return max_height;
    }
};
