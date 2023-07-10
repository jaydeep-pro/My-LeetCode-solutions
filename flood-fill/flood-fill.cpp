class Solution {
public:
void dfs(int sr , int sc, vector<vector<int>>&image, int color, 
vector<vector<int>>& vis, int m , int n, int delrow[] , int delcol[] , int initialCol){
    vis[sr][sc]=1;
    image[sr][sc] = color;

    for(int i=0;i<4;i++){
        int nrow = sr + delrow[i];
        int ncol = sc + delcol[i];

        if(nrow >=0 && nrow < m && ncol >=0 && ncol <n && vis[nrow][ncol] ==0 && image[nrow][ncol] == initialCol){
            dfs(nrow, ncol , image, color, vis, m , n , delrow, delcol , initialCol);
        }
    }

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();

        int delrow[] = {0 , -1, 0 , 1};
        int delcol[] = {-1, 0 , 1 , 0};

        vector<vector<int>> vis(m , vector<int>(n, 0));
        int initialCol = image[sr][sc];
        dfs(sr, sc, image , color, vis, m , n ,delrow, delcol , initialCol);

        return image;
    }
};