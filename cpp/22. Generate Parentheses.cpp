class Solution {
public:
    vector<string> ans;
    void help(string s, int open, int close, int n) {
        if(close == n) {
            ans.push_back(s);
            return;
        }
        if(open == n) 
            help(s + ')', open, close + 1, n);
        else {
            help(s + '(', open + 1, close, n);
            if(open > close)
                help(s + ')', open, close + 1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        help("", 0, 0, n);
        return ans;
    }
};
