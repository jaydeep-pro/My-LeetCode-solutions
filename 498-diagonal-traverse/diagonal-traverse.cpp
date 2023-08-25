class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n= mat.size();
        int m = mat[0].size();
        vector<int>ans;
        bool revFlag = true;
        for(int j=0;j<m;j++){
             int r =0;
             int c = j;
             vector<int>temp;
             while(r>=0 && r<n && c>=0 && c<m){
                 temp.push_back(mat[r][c]);
                 r++,c--;
             }
             if(revFlag) reverse(temp.begin(), temp.end());
             revFlag = !revFlag;
             ans.insert(ans.end() , temp.begin(), temp.end());
        }
        for(int i=1;i<n;i++){
            vector<int>temp;
            int r = i;
            int c = m-1;
            while(r>=0 && r<n && c>=0 && c<m){
                 temp.push_back(mat[r][c]);
                 r++,c--;
             }
            if(revFlag) reverse(temp.begin(), temp.end());
             revFlag = !revFlag;
             ans.insert(ans.end() , temp.begin(), temp.end());
        }
        return ans;
    }
};