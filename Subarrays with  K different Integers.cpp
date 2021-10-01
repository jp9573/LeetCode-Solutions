class Solution {
public:
    int fun(vector<int> &a, int b)
{
    unordered_map<int,int> m;

    int l = 0, h = 0;

    int n = a.size();

    int ans = 0;

    while(h < n)
    {
        m[a[h]]++;

        while(m.size() > b)
        {
            m[a[l]]--;

            if(m[a[l]] == 0)
            m.erase(a[l]);

            l++;
        }

        ans += h-l+1;

        h++;
    }

    return ans;
}

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        int ans = fun(nums,k) - fun(nums,k-1);
        
        return ans;
        
    }
};