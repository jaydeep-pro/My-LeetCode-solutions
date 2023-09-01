class Solution {
public:
    int solve(vector<int>cost, int idx , int n, vector<int>&dp ){
        if(idx >= n) return 0;
        
        if(dp[idx] != -1) return dp[idx];
        
        int left = solve(cost, idx+1 , n, dp);

        int right =INT_MAX;
        if(idx < n-1)
          right =  solve(cost, idx +2 , n , dp);

        return dp[idx] =cost[idx] + min(left, right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
       vector<int>dp(n+1, -1);
       return min(solve(cost , 0 , n, dp), solve(cost, 1 , n, dp));
    }
};