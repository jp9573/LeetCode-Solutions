class Solution {
public:
    int maxProduct(vector<int>& nums) {
     // currentPos-> currentPositive
    //currenNeg -->current Negative
    
    int i, n = nums.size();
    int currentPos = nums[0], currentNeg = nums[0];
    int result = nums[0];

    for (i = 1; i < n; i++)
    {
        if (nums[i] == 0)
        {
            currentPos = 0;
            currentNeg = 0;
            result = max(result, 0);
        }
        else if (nums[i] > 0)
        {

            result = max(max(result, nums[i]), currentPos * nums[i]);
            currentPos = max(nums[i], currentPos * nums[i]);
            currentNeg = currentNeg * nums[i];
        }

        else
        {

            result = max(max(result, nums[i]), currentNeg * nums[i]);
            int term = currentPos;
            currentPos = max(nums[i], currentNeg * nums[i]);
            currentNeg = min(term * nums[i], nums[i]);
        }
    }
    return result;
    }
};
