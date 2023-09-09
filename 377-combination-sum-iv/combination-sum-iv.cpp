class Solution {
public:
    int solve(vector<int>& nums, int target, int idx, int n , vector<int>&dp){
        if(target == 0) return 1;
        if(target < 0) return 0;

        if(idx == n) {
            if(target ==0) return 1;
            return 0;
        }
        if(dp[target] != -1) return dp[target];
        int ans =0;
        //pick
        if (target >= nums[idx]) {
            ans += solve(nums, target - nums[idx], 0, n , dp);
        }
        
        //not pick
        ans += solve(nums, target, idx+1, n , dp);

        return dp[target] = ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>dp(target+1, 0);

        
      dp[0] =1;

        for(int i=1;i<=target;i++){
            for(int j=0;j<n;j++){
                //pick
               if(i - nums[j] >=0){
                   if(dp[i] > INT_MAX - dp[i-nums[j]]) break;
                   dp[i] +=  dp[i-nums[j]];
               }
            }

        }
        return dp[target];
    }
};