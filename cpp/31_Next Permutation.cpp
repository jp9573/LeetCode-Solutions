class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> ans=nums;
        vector<int> temp;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<=nums[i-1]){
                temp.push_back(nums[i]);
                ans.pop_back();
            }
            else{
                temp.push_back(nums[i]);
                ans.pop_back();
                int index=upper_bound(temp.begin(),temp.end(),nums[i-1])-temp.begin();
                ans.pop_back();
                ans.push_back(temp[index]);
                temp.erase(temp.begin()+index);
                temp.insert(temp.begin()+index,nums[i-1]);
                for(int i=0;i<temp.size();i++){
                    ans.push_back(temp[i]);
                }
                nums=ans;
                return;
            }
        }
        temp.push_back(nums[0]);
        nums=temp;
        return ;
    }
};
