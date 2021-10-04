class Solution {
public:

//Recursion with memoization solution
	int longestPalinSubseq(string& str, int si, int ei, vector<vector<int>>& dp) {
		if (ei < si)
			return dp[si][ei] = 0;
		if (ei == si)
			return dp[si][ei] = 1;

		if ( dp[si][ei] != -1)
			return dp[si][ei];
		int len = 0;
		if (str[si] == str[ei]) {
			len = longestPalinSubseq(str, si + 1, ei - 1,  dp) + 2;
		}
		else
			len = max(longestPalinSubseq(str, si, ei - 1,  dp), longestPalinSubseq(str, si + 1, ei, dp));

		return dp[si][ei] = len;
	}

	int longestPalindromeSubseq(string str) {
		int si = 0, ei = str.length() - 1, n = str.length();
		vector<vector<int>> dp(n, vector<int>(n, -1));
		return longestPalinSubseq(str, si, ei, dp);
	}
};