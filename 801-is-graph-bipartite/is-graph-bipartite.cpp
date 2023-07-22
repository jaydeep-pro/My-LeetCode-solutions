class Solution {
public:
  bool bfs(int node,  vector<vector<int>>&adj, vector<int>&color, int col){

     queue<int>q;
     q.push(node);
     
     color[node] = col;

     while(!q.empty()){
         node = q.front();
         q.pop();

         for(auto it: adj[node]){
             if(color[it] == -1){
                 q.push(it);
                 color[it] = !color[node];
             }
             else if(color[node] == color[it]){
                 return false;
             }
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
               if(bfs(i , adj, color , col)== false)
               return false;
           }
       }

   return true;
    }
};