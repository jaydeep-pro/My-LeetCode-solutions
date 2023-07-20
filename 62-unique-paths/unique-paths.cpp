class Solution {
public:
    // int solve(int i, int j , vector<vector<int>>&dp){
    //     if(i==0 && j==0) return 1;
    //     if(i<0 || j<0) return 0;
         
    //     if(dp[i][j] != -1) return dp[i][j];

    //      int left =0;
    //      if(j>0) left += solve(i, j-1, dp);
        
    //      int up=0;
    //      if(i>0)
    //      up += solve(i-1, j, dp);

    //     return dp[i][j]=(left+up);
    // }
    int uniquePaths(int m, int n) {
      vector<int>prev(n,0);
       
       for(int i=0;i<m;i++){
            vector<int>temp(n, 0);
           for(int j=0;j<n;j++){
               if(i==0 && j==0) temp[j]=1;

               else{
                 temp[j] += prev[j];
                 if(j>0)temp[j] += temp[j-1];
               }
           }
           prev= temp;
       }
        return prev[n-1];
    }
};