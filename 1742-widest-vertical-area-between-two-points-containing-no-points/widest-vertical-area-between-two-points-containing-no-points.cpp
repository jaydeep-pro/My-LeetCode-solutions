class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int mini = INT_MIN;

        for(int i=0;i<points.size()-1;i++){
            mini = max(mini, points[i+1][0] - points[i][0]);
        }

        return mini;
    }
};