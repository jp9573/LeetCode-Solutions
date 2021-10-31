class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int x = grid.size();
        int y = grid[0].size();
        
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(i==0 and j==0) continue;
                else if(i==0 and j!=0){
                    grid[i][j] += grid[i][j-1];
                    continue;
                }
                else if(i!=0 and j==0){
                    grid[i][j] += grid[i-1][j];
                    continue;
                }
                
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        
        return grid[x-1][y-1];
    }
};
