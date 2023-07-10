class Solution {
public:
  bool dfs(int node,  vector<vector<int>>&adj, vector<int>&color, int col){

      color[node] = col;

      for(auto it: adj[node]){
          if(color[it] == -1){
             if(dfs(it, adj, color, !col)== false)
             return false;
          }
          else if(col == color[it]){
              return false;
          }
      }
      return true;
  }

    bool isBipartite(vector<vector<int>>& adj) {
        int n= adj.size();
        vector<int>color(n , -1);
       int col =0;
     
       for(int i=0;i<n;i++){
           if(color[i] == -1){
               if(dfs(i , adj, color , col)== false)
               return false;
           }
       }

   return true;
    }
};