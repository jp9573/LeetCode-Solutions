//problem link https://leetcode.com/problems/trapping-rain-water/
// Difficulty level : hard
// most optimised O(N) time and O(1) space
class Solution {
public:
    int trap(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        int leftmax=0,rightmax=0,ans=0;
        while(l<=r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=leftmax){
                    leftmax=arr[l];
                }
                else ans+=leftmax-arr[l];
                
                l++;
            }
            else{
                if(arr[r]>=rightmax){
                    rightmax=arr[r];
                }
                else ans+=rightmax-arr[r];
                
                r--;
            }
        }
        return ans;
    }
};
