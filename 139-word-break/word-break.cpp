class Solution
{
    public:
        bool solve(string s, vector<string> &wordDict, int ind, int n , vector<int>&dp)
        {
            if (ind == n) return true;
            if(dp[ind] != -1) return dp[ind];

            for (int i = ind; i < n; i++)
            {
                string word = s.substr(ind, i - ind + 1);
                for (int j = 0; j < wordDict.size(); j++)
                {
                    if (word == wordDict[j])
                    {
                        if (solve(s, wordDict, i + 1, n , dp)){
                            dp[ind]=1;
                            return true;}
                    }
                }
            }
            dp[ind]=0;
            return false;
        }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        vector<int>dp(s.length(), -1);
        if (solve(s, wordDict, 0, s.length() , dp) == true) return true;

        return false;
    }
};