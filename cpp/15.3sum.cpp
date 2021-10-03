class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int sum;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            //1 1 2 3 4 4 5
            if(i==0 || nums[i]!=nums[i-1]){
                 int left = i+1;
                 int right= n-1;
                while(left<right){
                    cout<<i<<" "<<left<<" "<<right<<endl;
                    sum = nums[i]+nums[left]+nums[right];
                    if(sum==0){
                        ans.push_back({nums[i],nums[left],nums[right]});
                        while(left<right && nums[left]==nums[left+1])
                            left++;
                        while(left<right && nums[right]==nums[right-1])
                            right--;
                        left++;
                        right--;

                    }else if(sum>0){
                        right--;
                    }else{
                        left++;
                    }
                }
            }
        }
        return ans;
    }
};

// ANOTHER SOLUTION 
