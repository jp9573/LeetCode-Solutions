class Solution {
public:
    int maxProd(vector<int>& arr1, vector<int>& arr2, int i1, int i2, vector<vector<int>>& dp) {
        if (i1 == arr1.size() || i2 == arr2.size()) {
            return -1e7;
        }
        if (dp[i1][i2] != -1) {
            return dp[i1][i2];
        }
        int cv = arr1[i1] * arr2[i2] ;
        int a = cv + maxProd(arr1, arr2, i1 + 1, i2 + 1, dp);
        int b = maxProd(arr1, arr2, i1, i2 + 1, dp);
        int c = maxProd(arr1, arr2, i1 + 1, i2, dp);
        return dp[i1][i2] = max(max(a, b), max(cv, c));
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), -1));
        return maxProd(nums1, nums2, 0, 0, dp);
    }
};