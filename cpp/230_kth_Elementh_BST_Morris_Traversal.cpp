class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int count = 0; 
        int res = -1; 
        TreeNode* cur = root; 
        while(cur != NULL) {
            if(cur->left == NULL) {
                count++; 
                if(count == k) res = cur->val;  
                cur = cur->right; 
            }
            else {
                TreeNode* prev = cur->left; 
                while(prev->right != NULL && prev->right != cur) {
                    prev = prev->right; 
                }
                
                if(prev->right == NULL) {
                    prev->right = cur;
                    cur = cur->left; 
                }
                else {
                    prev->right = NULL;  
                    count++; 
                    if(count == k) res = cur->val;
                    cur = cur->right; 
                }
            }
        }
        return res; 
    }
};