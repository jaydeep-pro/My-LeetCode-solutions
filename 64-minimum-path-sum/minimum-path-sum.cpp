class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0) dp[0][0] = g[0][0];
                else{
                //down
                int down = g[i][j];

                if(j>0) down += dp[i][j-1];
                else down += 1e9;

                //right
                int right = g[i][j];
               
               if(i>0)  right+= dp[i-1][j];
               else right+=1e9;

                dp[i][j] = min(down , right);
                }
            }
        }
        return dp[n-1][m-1];
    }
};