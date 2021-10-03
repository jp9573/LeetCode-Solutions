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
class Solution {
public:
      
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* templeft=root->left;
        TreeNode* tempright=root->right;
        root->left=NULL;
        flatten(templeft);
        flatten(tempright);
        root->right=templeft;
        TreeNode* current= root;
        while(current->right!=NULL) current=current->right;
        current->right=tempright;
    }
};
