class Solution {
public:
    
    
    
    
    int doit(int sind,int pind,string &s, string &p,vector<vector<int>> &dp){
        
        if(sind<0 && pind<0){
            return 1;
        }
        
        if(sind>=0 && pind<0){
            return 0;
        }
        
        if(sind<0){
            if(p[pind]=='*'){
                return doit(sind,pind-1,s,p,dp);
            }
            else{
                return 0;
            }
        }
    
        if(dp[sind][pind]!=-1){
            return dp[sind][pind];
        }
        
        if(s[sind]==p[pind]||p[pind]=='?'){
            dp[sind][pind]=doit(sind-1,pind-1,s,p,dp);
        }
        else if(p[pind]=='*'){
            dp[sind][pind]=(doit(sind-1,pind,s,p,dp)||doit(sind,pind-1,s,p,dp));
        }
        else{
            dp[sind][pind]=0;
        }
        
        return dp[sind][pind];
        
    }
    
    
    bool isMatch(string s, string p) {
        
        vector<vector<int>> dp(s.size()+1,vector<int>(p.size()+1,-1));
        if (doit(s.size()-1,p.size()-1,s,p,dp)){
            return true;
        }
        return false;
    }
};
