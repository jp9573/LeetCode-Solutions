// https://simeetnayan81.github.io/
#include <bits/stdc++.h>

using namespace std;

void display(vector<int> &arr)
{
	for (int ele : arr)
		cout << ele << " ";
	cout << endl;
}

void display2D(vector<vector<int>> &arr)
{
	for (vector<int> ar : arr)
		display(ar);
	cout << endl;
}
int minC(int tar, vector<int> &itr, int n, vector<int> &dp) {
	if (tar == 0)
		return dp[tar] = 0;

	if (dp[tar] != -1) {
		return dp[tar];
	}

	int ans = 1e8;
	for (int i = 0; i < n; i++)
	{
		if (tar >= itr[i]) {
			int subAns = minC(tar - itr[i], itr, n, dp);
			if (subAns != 1e8 && subAns + 1 < ans)
				ans = subAns + 1;
		}
	}
	return dp[tar] = ans;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	vector<int> coins(n);
	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
	}
	int tar;
	cin >> tar;
	vector<int> dp(tar + 1, -1);
	int ans = minC(tar, coins, coins.size(), dp);
	cout << (ans != 1e8 ? ans : -1) << endl;

}