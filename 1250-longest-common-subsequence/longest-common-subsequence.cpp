class Solution {
public:
    // int lcs(string t, string s, int n, int m, vector<vector<int>>&dp){
    //     if(n<0 || m<0) return 0;
         
    //      if(dp[n][m] != -1) return dp[n][m];
    //     //match or notmatch
    //     if(t[n] == s[m]){
    //         return dp[n][m] = 1 + lcs(t, s, n-1, m-1,dp);
    //     }
    //     else{
    //         return dp[n][m]= max(lcs(t,s,n,m-1,dp) , lcs(t,s, n-1, m,dp));
    //     }
    // }
    int longestCommonSubsequence(string text1, string text2) {
       int n= text1.size();
       int m= text2.size();

     vector<int>prev(m+1, 0),curr(m+1, 0);


       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
               if(text1[i-1] == text2[j-1]){
                   curr[j] = 1 + prev[j-1];
               }
               else{
                   curr[j] = max(prev[j], curr[j-1]);
               }
           }
           prev = curr;
       }

       return prev[m];

    }
};