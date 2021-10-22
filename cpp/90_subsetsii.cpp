class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& a) 
    {
        set<vector<int>> s; 
        int n = a.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> t;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))
                    t.push_back(a[j]);
            }
            sort(t.begin(),t.end());
            s.insert(t);
        }
        vector<vector<int>> ans;
        for(auto &v:s)
            ans.push_back(v);
        return ans;
    }
};
