class Solution {
public:
    
    int func(char st1,char st2){
        if(st1=='0' && st2=='0'){
            return 2;
        }
        if(st1=='0' && st2!='0'){
            return 0;
        }
        if(st1<='2' && st2=='0'){
            return 3;
        }
        if(st1>'2' && st2=='0'){
            return 2;
        }
        if(st1<'2'){
            return 1;
        }
        if(st1=='2' && st2<='6'){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1);
        dp[0]=1;
        if(s[0]=='0'){
            return 0;
        }
        for(int i=1;i<=n;i++){
            if(i==1){
                dp[i]=dp[i-1];
            }
            else{
                int x=func(s[i-2],s[i-1]);
                if(x==2){
                    return 0;
                }
                else if(x==3){
                    dp[i]=dp[i-2];
                }
                else if(x==1){
                    dp[i]=dp[i-1]+dp[i-2];
                }
                else if(x==0){
                    dp[i]=dp[i-1];
                }
            }
            
            
        }
        return dp[n];
        
        
    }
};
