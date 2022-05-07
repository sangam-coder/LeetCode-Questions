class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
  
        
        int n = grid.size(), m = grid[0].size();
        int tnr = 0, cnt = 0, tim = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    
                    q.push({i,j});
                }
                if (grid[i][j] != 0) tnr++;
            }
        }
       
        while(!q.empty()){
            int size = q.size();
            cnt+=size;
            while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                   if(x-1>=0&&grid[x-1][y]==1){
                    grid[x-1][y] = 2;
                        q.push({x-1,y});
                   }
                        if(x+1<n&&grid[x+1][y]==1){
                    grid[x+1][y] = 2;
                             q.push({x+1,y});
                   }
                        if(y-1>=0&&grid[x][y-1]==1){
                    grid[x][y-1] = 2;
                             q.push({x,y-1});
                   }
                        if(y+1<m&&grid[x][y+1]==1){
                    grid[x][y+1] = 2;
                             q.push({x,y+1});
                   }
                }
            if(!q.empty()) tim++;
            }
            
            
        
        if(cnt==tnr) return tim;
        else return -1;
    }
};