class Solution {
public:
    int m,n;
    vector<vector<int>> a,vis;
    int rec(int i, int j)
    {
        if(i<0 || j<0 || i>=m || j>=n || a[i][j]==0 ||vis[i][j]==1)
            return 0;
        vis[i][j] = 1;
        int ans = 1;
        ans += rec(i-1,j);
        ans += rec(i,j-1);
        ans += rec(i+1,j);
        ans += rec(i,j+1);
        return ans;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        a = grid;
        m = a.size();
        n = a[0].size();
        
        vis.resize(m);
        for(auto &v:vis)
            v.resize(n);
        
        int ans = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==1 && !vis[i][j])
                {
                    ans = max(ans,rec(i,j));
                }
            }
        }
        return ans;
    }
};
