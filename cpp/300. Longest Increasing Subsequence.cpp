class Solution {
public:
	int LISFromLeftToRight(vector<int> & arr, vector<int>& dp) {
		int n = arr.size();
		int ans = -1;
		for (int i = 0; i < n; i++) {
			dp[i] = 1;
			for (int j = 0; j < i; j++) {
				int m = dp[j];
				if (arr[i] > arr[j]) {
					dp[i] = max(dp[i], m + 1);
				}
			}
			ans = max(ans, dp[i]);
		}
		return ans;
	}
	int lengthOfLIS(vector<int>& nums) {
		int s = nums.size();
		vector<int> dp(s);
		return LISFromLeftToRight(nums, dp);
	}
};