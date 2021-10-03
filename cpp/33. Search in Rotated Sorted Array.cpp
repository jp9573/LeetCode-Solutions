class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0){
            return ans;
        }
        int minlen=INT_MAX;
        for(string s:strs){
            if(s.length()<minlen){
                minlen=s.length();
            }
        }
        char prev;
        for(int i=0;i<minlen;i++){
            for(int j=0;j<strs.size();j++){
                if(j==0){
                    prev=strs[j][i];
                }
                else{
                    if(strs[j][i]!=prev){
                        return ans;
                    }
                }
            }
            ans=ans+prev;
        }
        
        return ans;
    }
};
