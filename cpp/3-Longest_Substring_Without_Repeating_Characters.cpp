class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int ans = 0, start = -1;
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]>start) start = hash[s[i]];
            hash[s[i]] = i;
            ans = max(ans, i-start);
        }
        return ans;
    }
};