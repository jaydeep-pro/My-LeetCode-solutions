class Solution {
public:
    int orangesRotting(vector<vector<int>>& image) {
         vector<vector<int>>grid = image;
        int m= grid.size();
        int n= grid[0].size();
        vector<vector<int>>vis(m , vector<int>(n, 0));
        queue<pair<pair<int, int>, int>>q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    vis[i][j]=1;
                    q.push({{i, j}, 0});
                }
            }
        }
        int delrow[] = {-1, 0 , +1 , 0};
        int delcol[] = {0, -1, 0 , 1};

        int maxT =0;

        while(!q.empty()){
            int row= q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
             q.pop();
           
            
           for(int i=0;i<4;i++){
               int nrow = row + delrow[i];
               int ncol = col + delcol[i];

               if((nrow >= 0) && (nrow < m) && (ncol >=0) && (ncol < n) && (!vis[nrow][ncol]) && (grid[nrow][ncol] == 1)){
                   vis[nrow][ncol] = 1;
                   grid[nrow][ncol] = 2;
                   q.push({{nrow, ncol} , time+1});
                    maxT = max(maxT, time+1);
               }
           }

        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return maxT;
    }
};