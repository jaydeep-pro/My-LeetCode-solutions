class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int count=0;
        int m= Grid.size()-1;
        int n= Grid[0].size()-1;
      vector<int>prev(n+1, 0);


        for(int i=0;i<=m;i++){
            vector<int>temp(n+1, 0);
            for(int j=0;j<=n;j++){
                if(Grid[i][j] ==1) temp[j]=0;
               else if(i==0 && j==0) temp[0] = 1;
                else{
                   //down
                   temp[j]+=prev[j];
                   //right
                  if(j>0) temp[j]+=temp[j-1];

                }
            }
            prev= temp;
        }


       return prev[n];
         
    }
//    int solve(vector<vector<int>>& grid, int m, int n , vector<vector<int>>&dp){
//        if(grid[m][n] == 1) return dp[m][n]=0;
//        if(n==0 && m==0) return dp[0][0] =1;
//        if(n<0 || m<0) return 0;
       
//        if(dp[m][n] != -1) return dp[m][n];
//        //up
//        int up=0;
//        if(m>0) up+=solve(grid, m-1, n , dp );
//        //left
//         int left =0;
//         if(n>0) left+= solve(grid, m, n-1 , dp);

//         return dp[m][n] = (left + up);

//    }
//     int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
//         int count=0;
//         int m= Grid.size()-1;
//         int n= Grid[0].size()-1;
//        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
//        return solve(Grid, m , n , dp );
         
//     }
};