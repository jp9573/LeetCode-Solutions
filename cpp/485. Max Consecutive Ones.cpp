class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxConsecutiveOnes = 0;
        
        int n = nums.size(), count = 0;
        
        for(int i = 0; i < n; i++){
            
            if(nums[i] == 1){
                count++;
                
                maxConsecutiveOnes = max(maxConsecutiveOnes, count);
            } else {
                count = 0;
            }
            
        }
        
        return maxConsecutiveOnes;
        
    }
};