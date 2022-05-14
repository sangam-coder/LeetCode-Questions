class Solution {
public:
   int neighbour(vector<vector<int>>& board,int i,int j)
    {
        int m=board.size(),n=board[0].size();
        int c=0;
        if(i+1<m){
            if(board[i+1][j]==1||board[i+1][j]==3)    c++;
        }
        if(i-1>=0)
        {
            if(board[i-1][j]==1||board[i-1][j]==3)    c++;
        }
        if(j+1<n){
            if(board[i][j+1]==1||board[i][j+1]==3)   c++;    
        }
        if(j-1>=0){
            if(board[i][j-1]==1||board[i][j-1]==3)  c++;
        }
        if(j-1>=0&&i-1>=0)
        {
            if(board[i-1][j-1]==1||board[i-1][j-1]==3)  c++;
        }
        if(j+1<n&&i+1<m)
        {
            if(board[i+1][j+1]==1||board[i+1][j+1]==3)  c++;
        }
        if(j-1>=0&&i+1<m)
        {
            if(board[i+1][j-1]==1||board[i+1][j-1]==3)  c++;
        }
        if(i-1>=0&&j+1<n){
              if(board[i-1][j+1]==1||board[i-1][j+1]==3)  c++;
        }
        return c++;  
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]){
                    if(neighbour(board,i,j)<2)board[i][j]=3;
                    else if(neighbour(board,i,j)>3)board[i][j]=3;
                }
                else if(!board[i][j]){
                    if(neighbour(board,i,j)==3)board[i][j]=2;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==3)board[i][j]=0;
                else if(board[i][j]==2)board[i][j]=1;
            }
        }
        
    
        
    }
};