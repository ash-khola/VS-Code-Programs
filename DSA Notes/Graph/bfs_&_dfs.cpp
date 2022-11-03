// Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
// Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    queue<int> q;
    vector<int> vis(V, 0), bfs;
    q.push(0);
    vis[0] = 1;

    int temp;

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        bfs.push_back(temp);

        for (auto a : adj[temp])
        {
            if (vis[a] != 1)
            {
                vis[a] = 1;
                q.push(a);
            }
        }
    }

    return bfs;
}



//************************* DFS *********************************

// Given a connected undirected graph.Perform a Depth First Traversal of the graph.

void solve(int src, vector<int> adj[], vector<int> &dfs, vector<int> &vis)
{
    vis[src] = 1;
    dfs.push_back(src);

    for (auto a : adj[src])
    {
        if (vis[a] != 1)
            solve(a, adj, dfs, vis);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> vis(V);
    vector<int> dfs;
    solve(0, adj, dfs, vis);

    return dfs;
}
