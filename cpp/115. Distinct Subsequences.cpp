class Solution {
public:
	int distSub(string& s, string& t, int si, int ti, vector<vector<int>>& dp) {
		if (ti == t.length()) {
			return dp[si][ti] = 1;
		}
		if (si == s.length()) {
			return dp[si][ti] = 0;
		}
		if (dp[si][ti] != -1) {
			return dp[si][ti];
		}
		int ans;
		if (s[si] == t[ti])
			ans = distSub(s, t, si + 1, ti + 1, dp) + distSub(s, t, si + 1, ti, dp);
		else
			ans = distSub(s, t, si + 1, ti, dp);

		return dp[si][ti] = ans;
	}
	int numDistinct(string s, string t) {
		int sl = s.length();
		int tl = t.length();
		vector<vector<int>> dp(sl + 1, vector<int>(tl + 1, - 1));
		return  distSub(s, t, 0, 0, dp);
	}
};