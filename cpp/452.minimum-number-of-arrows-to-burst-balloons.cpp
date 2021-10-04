class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        if(a[1]<b[1]){
            return 1;
        }
        return 0;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans=1;
        sort(points.begin(), points.end(), cmp);
        int currEnd = points[0][1];
        int n = points.size();
       for(int i = 1; i < n; i++){
         if(currEnd < points[i][0]){
            ans++;
            currEnd = points[i][1];
         }
      }
        return ans;
    }
};