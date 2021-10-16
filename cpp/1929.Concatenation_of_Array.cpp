class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        int size=nums.size();
        int i;
        for(i=0;i<size;i++)
        {
            ans[i]=nums[i];
            ans[i+size]=nums[i];
        }
        return ans;
    }
};
