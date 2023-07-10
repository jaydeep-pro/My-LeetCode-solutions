class Solution {
public:
    // void bfs(int node, vector<int>&vis , vector<int>adj[]){
    //     vis[node] = 1;
    //     queue<int>q;
    //     q.push(node);
    //     while(!q.empty()){
    //         int i = q.front();
    //         q.pop();

    //         for(auto it : adj[i]){
    //             if(!vis[it]){
    //                 vis[it] =1;
    //                 q.push(it);
    //             }
    //         }
    //     }
    // }
    void dfs(int node, vector<int>&vis, vector<int>adj[]){
        vis[node]= 1;

        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it, vis, adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
         vector<int>adj[n];

         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 if(i != j && isConnected[i][j]==1){
                     adj[i].push_back(j);
                     adj[j].push_back(i);
                 }
             }
         }

         vector<int>vis(n , 0);

         int count=0;
         for(int i=0;i<n;i++){
             if(vis[i] == 0){
                 count++;
                 dfs(i , vis, adj);
             }
         }
         return count;
    }
};