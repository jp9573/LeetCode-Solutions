class Solution {
public:
    int findlength(string s, int left, int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    
    string longestPalindrome(string s) {
        if(s.size()==0) return "";
        int start=0, end=0;
        for(int i=0;i<s.size();i++){
            int l1=findlength(s,i,i);
            int l2=findlength(s,i,i+1);
            int l=max(l1,l2);        
            if(l>end-start+1){
                start=i-(l-1)/2;
                end=i+l/2;
            }
        }
        return s.substr(start, end-start+1);
    }
};