class Solution {
public:
    int trap(vector<int>& height) {
    int  n = height.size();
        if (n ==0)
            return 0;
        int i;
        int left[n];
            int right[n];
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(i=1;i<n;i++){
            left[i]= max(left[i-1],height[i]);
        }
        for(i=n-2;i>=0;i--){
            right[i] = max(right[i+1],height[i]);
        }
        int res=0;
        for(i=0;i<n-1;i++){
            res+= min(left[i],right[i])- height[i];
        }
        return res;
    }
};
