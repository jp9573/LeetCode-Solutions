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

// Another approach for solving this problem. Yet easy to understand for beginners.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> track = {0};
        for(int i = 0; i < n; i++){
            int l = 1;
            string ch = "";
            for(int j = i+1; j < n; j++){
                if(s[i] == s[j]){           // level-1 checking goes here
                    break;                  // search for the 1st character with every char in every loop
                }
                int found = ch.find(s[j]);  // level-2 checking goes here
                if(found != string::npos){     // if char founds in newly formed string it returns index if not it returns string::npos
                    break;
                } else {
                    ch += s[j];
                    l += 1;
                }
            }
            track.push_back(l);            //stores length of all possible longest substring
        }
        int longest_length = *max_element(track.begin(), track.end()); //determines the largest value in the vector
        return longest_length;
    }
};
