struct node{
    int x, y, time;
    node(int _x, int _y, int _time){
        x = _x;
        y = _y;
        time = _time;
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        queue<node> q;
        int cntOranges = 0, cnt = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.push(node(i, j, 0));
                }
                if(grid[i][j] != 0) cntOranges++;
            }
        }
        
        int ans = 0;
        while(!q.empty()){
            int x = q.front().x;
            int y = q.front().y;
            int time = q.front().time;
            q.pop();
            
            cnt++;
            ans = max(ans, time);
            
            int dx[] = {0, +1, 0, -1};
            int dy[] = {+1, 0, -1, 0};
            
            for(int i = 0; i < 4; i++){
                int newX = x + dx[i];
                int newY = y + dy[i];
                
                if(newX >= 0 && newX < m && newY >= 0 && newY < n && grid[newX][newY] == 1){
                    grid[newX][newY] = 2;
                    q.push(node(newX, newY, time+1));
                }
            }
        }
        
        if(cnt == cntOranges) return ans;
        return -1;
    }
};
