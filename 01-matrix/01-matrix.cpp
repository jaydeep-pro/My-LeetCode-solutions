class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
         int m = mat.size();
         int n= mat[0].size(); 

         int delrow[] = {0 , 1, -1, 0};
         int delcol[]= {1, 0 , 0 , -1};

         vector<vector<int>> ans(m , vector<int>(n , 0));
         vector<vector<int>> vis(m , vector<int>(n , 0));

         queue<pair<pair<int, int>, int>>q;
         for(int i=0;i<m ;i++){
             for(int j=0;j<n;j++){
                 if(mat[i][j] == 0){
                     vis[i][j]=1;
                     q.push({{i, j} , 0});
                 }
             }
         }

         while(!q.empty()){
             int row = q.front().first.first;
             int col = q.front().first.second;
             int dis = q.front().second;
             q.pop();

            ans[row][col] = dis;
             for(int i=0;i<4;i++){
                 int nrow = row + delrow[i];
                 int ncol = col + delcol[i];

                 if(nrow >=0 && nrow < m && ncol >= 0 && ncol < n && vis[nrow][ncol] == 0 ){
                     vis[nrow][ncol]=1;
                     q.push({{nrow, ncol}, dis+1});
                 }
             }
         }

       return ans;
    }
};