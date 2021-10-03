class Solution {
public:
	int sumPartition(vector<int>& arr, int idx, int tar, vector<vector<int>>& dp) {
		if (tar == 0 || idx == arr.size())
		{
			if (tar == 0)
				return dp[idx][tar] = 1;

			return dp[idx][tar] = 0;
		}
		if (dp[idx][tar] != -1) {
			return dp[idx][tar];
		}
		int ans = 0;
		if (tar - arr[idx] >= 0)
			ans = ans || sumPartition(arr, idx + 1, tar - arr[idx], dp);
		ans = ans || sumPartition(arr, idx + 1, tar, dp);
		return dp[idx][tar] = ans;
	}
	bool canPartition(vector<int>& nums) {
		int sum = 0;
		int n = nums.size();
		for (int ele : nums) {
			sum += ele;
		}
		if (sum % 2 != 0) {
			return 0;
		}
		else {
			int target = sum / 2;
			vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
			return sumPartition(nums, 0, target	, dp);
		}
	}
};