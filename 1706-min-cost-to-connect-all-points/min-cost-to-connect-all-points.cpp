class DisjointSet{
public:
    vector<int> size, parent;

    DisjointSet(int n)
    {
        size.resize(n+1, 1);
        parent.resize(n+1);

        for(int i = 0; i<= n;i++)
        {
            parent[i] = i;
        }
    }

    int find_ulp(int node)
    {
        if(node == parent[node]) return node;

        return parent[node] = find_ulp(parent[node]);
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = find_ulp(u);
        int ulp_v = find_ulp(v);

        if(ulp_u == ulp_v) return ;

        if(size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }

};



class Solution {
    // Using Kruskal Algo
public:
    int minCostConnectPoints(vector<vector<int>>& points) {

        // make each point connected with every other point and store the manhattan distance

        vector<array<int, 3>> adj;

        for(int i = 0; i<points.size(); i++)
        {
            for(int j = i+1; j<points.size(); j++)
            {
                int dist = abs(points[j][1] - points[i][1]) + abs(points[j][0] - points[i][0]);
                adj.push_back({i, j, dist});
            }
        }

        // apply kruskal algorithm

        sort(adj.begin(), adj.end(), [](auto &a, auto &b){
            return a[2] < b[2];
        });

        int sum = 0;

        DisjointSet ds(points.size());

        for(int i = 0; i<adj.size(); i++)
        {
            int src = adj[i][0], dest = adj[i][1], wt = adj[i][2];

            if(ds.find_ulp(src) != ds.find_ulp(dest))
            {
                ds.unionBySize(src, dest);
                sum += wt;
            }
        }

        return sum;
        
    }
};