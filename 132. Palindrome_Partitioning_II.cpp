/*
Given a string s, partition s such that every substring of the partition is a palindrome.

Return the minimum cuts needed for a palindrome partitioning of s.

Example 1:

Input: s = "aab"
Output: 1
Explanation: The palindrome partitioning ["aa","b"] could be produced using 1 cut.
Example 2:

Input: s = "a"
Output: 0
Example 3:

Input: s = "ab"
Output: 1
 
Constraints:

1 <= s.length <= 2000
s consists of lower-case English letters only.
*/

class Solution {
public:
    int minCut(string s) {
        int n = s.length();
		
		// 1-based indexing
        s = ' ' + s;
		
		// checking if the particular substring is palindromic or not 
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for (int i = n; i > 0; i--) {
            for(int j = i; j <= n ;j++) {
				
				// the substring of length 1 will always be palindrome
                if (i == j ) {
                    dp[i][j] = 1;
                }
				
				// checking for the length 2 substring 
                else if (j == i + 1 && s[i] == s[j]) {
                    dp[i][j] = 1;
                }
				
				// checking if corner character matched, check it with middle part that we already calculated
                else if(s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }
		
		// dp vector for storing answer, where index denotes the size of substring from starting index
        vector<int> res(n + 1, 0);
        
        for(int i = 1; i <= n; i++){
            res[i] = i - 1;
        }
        
        for (int i = 2; i <= n; i++){
            for(int j = i; j > 1; j--){
				// checking for different partitons
                if(dp[j][i]){    
                    res[i] = min (res[i], res[j-1] + 1);
                }
            }
			// if the whole substring is palindrome 
            if (dp[1][i]) {
               res[i] = 0; 
            } 
            
        }
        for (int i = 1; i <= n; i++){
        }
        return res[n] ;
    }
};
