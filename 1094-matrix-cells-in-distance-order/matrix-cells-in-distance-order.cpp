class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;
        queue<pair<int, int>> q;
        q.push({rCenter, cCenter});
        int delr[] = {0, -1, 0, 1};
        int delc[] = {-1, 0, 1, 0};
        vector<vector<bool>> vis(rows, vector<bool>(cols, false));
        vis[rCenter][cCenter] = true;

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            ans.push_back({i, j});
            q.pop();

            for (int k = 0; k < 4; k++) {
                int r = i + delr[k];
                int c = j + delc[k];

                if (r >= 0 && r < rows && c >= 0 && c < cols && !vis[r][c]) {
                    vis[r][c] = true;
                    q.push({r, c});
                }
            }
        }
        return ans;
    }
};
