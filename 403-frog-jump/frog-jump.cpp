class Solution {
public:
   unordered_map<int ,int>mp;
   int dp[2001][2001];
   int solve(vector<int>&stones, int n , int idx, int prev){
       if(idx == n-1) return 1;

       if(dp[idx][prev] != -1) return dp[idx][prev];

       int ans = 0;
       for(int next = prev-1;next <= prev+1;next++){
           if(next >0 && mp.find(stones[idx] + next) != mp.end()){
               ans =solve(stones, n, mp[stones[idx]+ next], next);
           }
           if(ans) break;
       }
       return dp[idx][prev] = ans;
   }
    bool canCross(vector<int>& stones) {
        for(int i=0;i<stones.size();i++){
            mp.insert({stones[i] , i});
        }
        memset(dp, -1, sizeof(dp));
      solve(stones, stones.size(), 0, 0);
      return dp[0][0];
    }
};