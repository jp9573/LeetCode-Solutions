// Problem URL : https://leetcode.com/problems/counting-bits/

class Solution {
public:
    
    vector<int> countBits(int n) {
        vector <int> ans(n+1);
        vector <int> dp;
        dp.push_back(0);
        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            dp.push_back(dp[i/2]);
            else
            dp.push_back(dp[i/2]+1);
        }
        return dp;
    }
};
