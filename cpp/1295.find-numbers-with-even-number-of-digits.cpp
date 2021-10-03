class Solution {
public:
    int findNumbers(vector<int>& nums) {
        long long ans,count=0;
        for(auto i:nums){
            ans = floor(log10(i))+1;
            if(ans%2==0){
                count++;
            }
        }
        return count;
    }
};