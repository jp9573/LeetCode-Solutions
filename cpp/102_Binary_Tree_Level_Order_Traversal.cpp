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
    void level_order_traversal(TreeNode* root,vector<vector<int>>&ans,int height)
    {
        if(root == NULL)
        {
            return;
        }
        if(height > ans.size())
        {
            vector<int>var;
            var.push_back(root->val);
            ans.push_back(var);
        }
        else
        {
            ans[height-1].push_back(root->val);
        }
        level_order_traversal(root->left,ans,height+1);
        level_order_traversal(root->right,ans,height+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int height = 1;
        level_order_traversal(root,ans,height);
        return ans;
    }
};