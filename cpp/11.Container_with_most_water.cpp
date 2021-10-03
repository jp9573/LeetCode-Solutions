class Solution {
public:
    int maxArea(vector<int>& height) {
        int l= 0;
        int r = height.size()- 1;
        int res =0 ;
        while(l<r){
            int lh = height[l];
            int rh = height[r];
            int min_h = min(lh,rh);
            int len = r - l;
            int c_area = min_h*len;
            res = max (res,c_area);
            if(lh<rh)
                l++;
            else
                r--;
        }
        return res;
    }
};
