class Solution {
public:
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>>&vis, int delrow[], int delcol[] , int m , int n){
          vis[row][col] = 1;
          grid[row][col] = 0;

      

          for(int i=0;i<4;i++){
              int nrow = row + delrow[i];
              int ncol = col + delcol[i];

              if(nrow >=0 && nrow < m && ncol >=0 && ncol <n && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                  dfs(nrow, ncol , grid, vis, delrow, delcol , m , n);
              }
          }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
         
        int delrow[] = {0 , -1, 0 , +1};
        int delcol[] = {-1, 0 , +1 , 0};

        vector<vector<int>>vis(m, vector<int>(n, 0));

        for(int i=0;i<m;i++){
           
           if(grid[i][0] == 1 && !vis[i][0]){
              dfs(i , 0 , grid, vis, delrow, delcol , m , n);
           }
           if(grid[i][n-1] == 1 && !vis[i][n-1]){
               dfs(i , n-1, grid, vis, delrow, delcol, m, n);
           }
        }
        for(int i=0;i<n;i++){
            if(grid[0][i] == 1 && !vis[0][i]){
                dfs(0 , i , grid, vis, delrow, delcol, m, n);
            }
            if(grid[m-1][i] == 1 && !vis[m-1][i]){
                dfs(m-1 , i, grid, vis , delrow , delcol , m, n);
            }
        }
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1) count++;
            }
        }
        return count;
    }
};