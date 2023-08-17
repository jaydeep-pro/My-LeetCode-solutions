class Solution
{
    public:
        vector<vector < int>> updateMatrix(vector<vector < int>> &mat)
        {
            int m = mat.size();
            int n = mat[0].size();

            vector<vector < int>> ans(m, vector<int> (n, -1));
            queue<pair<pair<int, int>, int>> q;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (mat[i][j] == 0)
                    {
                        ans[i][j] = 0;
                        q.push({{i,j},0 });
                    }
                }
            }
            while (!q.empty())
            {
                int i = q.front().first.first;
                int j = q.front().first.second;
                int steps = q.front().second;
                q.pop();

               

                int drow[4] = { -1,0,1,0};
                int dcol[4] = { 0,1,0,-1};
                for (int k = 0; k < 4; k++)
                {
                    int delrow = i + drow[k];
                    int delcol = j + dcol[k];

                    if (delrow >= m || delrow < 0 || delcol < 0 || delcol >= n) continue;

                    if (ans[delrow][delcol] == -1)
                    {
                        ans[delrow][delcol] = steps + 1;
                        q.push({{delrow,delcol},steps + 1 });
                    }
                }
            }
            return ans;
        }
};