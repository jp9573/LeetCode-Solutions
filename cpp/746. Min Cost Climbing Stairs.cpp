class Solution {
public:
    
    vector<int> co;
    int fin;
    int dp[1005];
    
    int solve(int cur) {
        if(cur>fin) {
            return 0;
        }
        
        if(dp[cur]!=-1) {
            return dp[cur];
        }
        
        if(dp[cur+1]==-1) {
            dp[cur+1] = solve(cur+1);
        }
        
        if(dp[cur+2]==-1) {
            dp[cur+2] = solve(cur+2);
        }
        
        return dp[cur] = co[cur] + min(dp[cur+1],dp[cur+2]);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        co.push_back(0);
        for(int i=0;i<n;i++) {
            co.push_back(cost[i]);
        }
        fin = n;
        for(int i=0;i<=1004;i++) dp[i] = -1;
        return min(solve(1),solve(2));
    }
};
