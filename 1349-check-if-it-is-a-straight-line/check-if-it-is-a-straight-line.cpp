class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) {
        int xdiff = (co[0][0] - co[1][0]);
        int ydiff = (co[0][1] - co[1][1]);

        for(int i=0;i<co.size()-1;i++){
           int tempx = (co[i][0] - co[i+1][0]);
           int tempy = (co[i][1] - co[i+1][1]);

            if( (ydiff*tempx) != (tempy*xdiff)) return false;
        }
        return true;
    }
};