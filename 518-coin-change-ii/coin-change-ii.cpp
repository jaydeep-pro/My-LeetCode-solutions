class Solution
{
    public:
        int numberofways(int idx, int amount, int n, vector<int> &coins, vector<vector< int>> &dp)
        {
            if (amount == 0) return 1;

            if (idx == n) return 0;

            if (dp[idx][amount] != -1) return dp[idx][amount];

            if (coins[idx] > amount)
            {
                return dp[idx][amount] = numberofways(idx + 1, amount, n, coins, dp);
            }
            else
            {
                return dp[idx][amount] = numberofways(idx, amount - coins[idx], n, coins, dp) + numberofways(idx + 1, amount, n, coins, dp);
            }
        }
    int change(int amount, vector<int> &coins)
    {
        int n = coins.size();
        vector<vector < int>> dp(n, vector<int> (amount + 1, -1));

        return numberofways(0, amount,n , coins, dp);
    }
};