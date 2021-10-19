/*                                                        15. 3Sum                                             */
/*                                         https://leetcode.com/problems/3sum/                                 */


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)return {};
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 and nums[i]==nums[i-1])continue;
            int sum=-nums[i];
            int s=i+1,e=nums.size()-1;
            while(e>s){
                if(nums[e]+nums[s]==sum){
                    ans.push_back({nums[i],nums[s],nums[e]});
                    int k=nums[s];
                    while(s<nums.size() and nums[s]==k){
                        s++;
                    }
                    k=nums[e];
                    while(s<nums.size() and nums[e]==k){
                        e--;
                    }
                }
                else if(nums[e]+nums[s]>sum)e--;
                else s++;
            }
        }
        return ans;
    }
};
