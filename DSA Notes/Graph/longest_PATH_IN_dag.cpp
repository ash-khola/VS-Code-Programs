// Given a Weighted Directed Acyclic Graph (DAG) and a source vertex s in it, find the longest distances from s to all other vertices in the given graph.

// This can be done using Dijkstra's algo but the time complexity will be V^2 

void topo(vector<pair<int, int>> adj[], vector<int> &vis, int src, vector<int> &order)
{
    vis[src] = 1;

    for (auto a : adj[src])
    {
        if (!vis[a.first])
            topo(adj, vis, a.first, order);
    }

    order.push_back(src);
}

vector<int> maximumDistance(vector<vector<int>> edges, int v, int e, int src)
{
    vector<pair<int, int>> adj[v];

    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
    }

    int sum = 0;
    vector<int> vis(v, 0);
    vector<int> dist(v, INT_MIN);
    vector<int> order;

    for (int i = 0; i < v; i++)
    {
        if (vis[i] == 0)
            topo(adj, vis, i, order);
    }

    dist[src] = 0;

    for (int i = v - 1; i >= 0; i--)
    {
        if (dist[order[i]] != INT_MIN)
        {
            for (auto a : adj[order[i]])
            {
                int prev_dist = dist[order[i]];
                int nxt_dist = a.second;
                int nxt = a.first;
                dist[nxt] = max(dist[nxt], prev_dist + nxt_dist);
            }
        }
    }

    return dist;
}