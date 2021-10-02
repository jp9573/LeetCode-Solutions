class Solution {
public:
    
    
    
    int doit(int i, int j,vector<vector<int>> &dp,vector<vector<int>> &matrix,int path){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int dx[]={0,0,-1,1};
        int dy[]={1,-1,0,0};
        for(int k=0;k<4;k++){
            if(i+dx[k]>=0 && i+dx[k]<matrix.size() && j+dy[k]>=0 && j+dy[k]<matrix[0].size() && matrix[i][j]<matrix[i+dx[k]][j+dy[k]]){
                dp[i][j]= max(dp[i][j],1+doit(i+dx[k],j+dy[k],dp,matrix,path+1));
            }
        }
        if(dp[i][j]==-1){
            dp[i][j]=1;
        }
        return dp[i][j];
        
        
    }
    
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        int ans=1;
        int path=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                    ans=max(ans,doit(i,j,dp,matrix,path+1));
            }
        }
        
        
        return ans;
    }
};
