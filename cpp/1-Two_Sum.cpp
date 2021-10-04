//Method 1 - Brute Force - TC = O(N2), SC = O(1) 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int i=0;i<nums.size()-1;i++){
            int val = target - nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(val==nums[j]){
                    sol.push_back(i);
                    sol.push_back(j);
                    return sol;
                }
            }
        }
        return sol;
    }
};

//Method 2 - Hash Table
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                sol.push_back(m[target-nums[i]]);
                sol.push_back(i);
                return sol;
            }
            m[nums[i]] = i;
        }
        return sol;
    }
};