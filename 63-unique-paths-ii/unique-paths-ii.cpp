class Solution
{
    public:

        int solve(int i, int j, int m, int n, vector<vector < int>> &Grid , vector<vector<int>>& dp)
        {
            if (i == m - 1 && j == n - 1)
            {
                return dp[i][j] = 1;
            }
            if (i >= m || i < 0 || j >= n || j < 0) return 0;

            if (dp[i][j] != -1) return dp[i][j];
            if (Grid[i][j] == 1) return 0;
            else
            {
                return dp[i][j] = solve(i + 1, j, m, n, Grid, dp) + solve(i, j + 1, m, n, Grid, dp);
            }
        }
    int uniquePathsWithObstacles(vector<vector < int>> &Grid)
    {
        int m = Grid.size();
        int n = Grid[0].size();
        if (Grid[m - 1][n - 1] == 1) return 0;
        vector<vector < int>> dp(m, vector<int> (n, -1));
        return solve(0, 0, m, n, Grid, dp);
    }
};