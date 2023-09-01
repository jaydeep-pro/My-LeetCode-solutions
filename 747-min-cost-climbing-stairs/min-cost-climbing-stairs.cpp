class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
  
      int prev1=0, prev2 =0, curr=0;
      for(int i = n-2;i>=0;i--){
          int left = cost[i] + prev1;
          int right = cost[i+1] + prev2;

          curr= min(left, right);
          prev2 = prev1;
          prev1 = curr;
      }
       return prev1;
      
    }
};