class Solution
{
    public:
        bool solve(int idx, vector<int> &nums, vector<bool> &dp)
        {
            if (idx < 0)
            {
                return true;	// Base case: valid partition up to this point
            }

            if (dp[idx])
            {
                return dp[idx];
            }

          

           	// Check 3 possibilities
            if (idx > 0 && nums[idx] == nums[idx - 1])
            {
                if(solve(idx - 2, nums, dp))return true;
            }
            // if (idx > 0 && nums[idx] == nums[idx - 1]+1)
            // {
            //    if(solve(idx - 2, nums, dp))return true;
            // }
            if (idx > 1 && nums[idx] == nums[idx - 1] && nums[idx] == nums[idx - 2])
            {
               if(solve(idx - 3, nums, dp)) return true;
            }
            if (idx > 1 && nums[idx] == nums[idx - 1] + 1 && nums[idx] == nums[idx - 2] + 2)
            {
                if(solve(idx - 3, nums, dp)) return true;
            }

            return dp[idx] = false;
        }
    bool validPartition(vector<int> &nums)
    {
        int n = nums.size();
        vector<bool> dp(n , false);

        return solve(n - 1, nums, dp);

        
    }
};