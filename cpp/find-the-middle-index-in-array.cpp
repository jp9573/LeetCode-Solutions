//leetcode.com/problems/find-the-middle-index-in-array/
class Solution {
public:
    int findMiddleIndex(vector<int>& arr) {
        bool flag = false;
        int ans, n = arr.size();

        for (int i = 0; i < n; i++) {
            int sum1 = 0, sum2 = 0;

            for (int j = 0; j < i; j++)  sum1 += arr[j];

            for (int j = i + 1; j < n; j++) sum2 += arr[j];


            if (sum1 == sum2) {
                ans = i;
                flag = true;
                break;

            }
        }
        if (flag) return ans;
        else return -1;
    }
};