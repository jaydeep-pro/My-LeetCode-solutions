class Solution {
public:
    int solve(string word1, string word2, int n, int m ,  vector<vector<int>>&dp){
        if(m<0) return n+1;
        if(n<0){
            return m+1;
        }
        if(dp[n][m] != -1) return dp[n][m];

        if(word1[n] == word2[m]){
            return dp[n][m] = solve(word1, word2, n-1, m-1 ,dp);
        }
        else{
 return dp[n][m] = min(1+ solve(word1, word2, n, m-1,dp), min(1+ solve(word1, word2, n-1, m,dp),1+ solve(word1, word2 , n-1, m-1 ,dp)));
        }
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        for(int i=0;i<=n;i++) dp[i][0] = i;
        for(int j=0;j<=m;j++) dp[0][j] = j;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
              if(word1[i-1] == word2[j-1]){
                  dp[i][j] = dp[i-1][j-1];
              }
              else{
      dp[i][j] = min(1+dp[i][j-1] , min(1+ dp[i-1][j],1+dp[i-1][j-1]));
              }
            }
        }
        return dp[n][m];
    }
};