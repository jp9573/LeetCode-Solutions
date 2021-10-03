class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1])
                continue;
            nums[j++] = nums[i];
        }
        return j;
        
    }
};
