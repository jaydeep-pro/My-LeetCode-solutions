class Solution {
public:
    void dfs(int row, int col , int delrow[] , int delcol[], vector<vector<int>>&vis, vector<vector<char>>&board ){
        vis[row][col] = 1;

        int m = board.size();
        int n= board[0].size();
        
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
           
           if((nrow >=0) && (nrow < m) && (ncol >=0 ) && (ncol <n) && vis[nrow][ncol]==0 && board[nrow][ncol] == 'O'){
               dfs(nrow, ncol , delrow, delcol ,vis, board );
           }
        }
    }
    void solve(vector<vector<char>>& board) {
       
        //let x be water and o be land
 
        // and think
        //first of all lets define row and col
        int m = board.size();
        int n= board[0].size();

        //lets make a visited array
        vector<vector<int>>vis(m , vector<int>(n, 0));
        
        int delrow[] = {-1 , 0 , 1 , 0};
        int delcol[] = {0 , -1, 0 , 1};

        //for first and last row
        for(int i=0;i<n;i++){
            //first row
            if(board[0][i] == 'O' && vis[0][i] ==0){
                dfs(0 , i , delrow , delcol , vis , board);
            }
            //last row
             if(board[m-1][i] == 'O' && vis[m-1][i] ==0){
                dfs(m-1 , i , delrow , delcol , vis , board);
            }
        }

        //for first ans last col
        for(int i=0;i<m;i++){
            if(board[i][0] == 'O' && vis[i][0] == 0){
                dfs(i, 0, delrow, delcol , vis, board);
            }

             if(board[i][n-1] == 'O' && vis[i][n-1] == 0){
                dfs(i, n-1, delrow, delcol , vis, board);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j] ==0 && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
     

    }
};