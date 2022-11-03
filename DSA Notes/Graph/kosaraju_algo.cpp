// Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, Find the number of strongly connected components in the graph.

// Three simple steps only:-
// 1. Reverse the graph
// 2. Run the dfs and fill the order vector
// 3. Do the dfs in the reverse graph and increament the count whenever we need to call the dfs function. 

void dfs(vector<int> adj[], vector<int> &vis1, vector<int> &order, int key)
{
    vis1[key] = 1;

    for (auto a : adj[key])
    {
        if (!vis1[a])
        {
            dfs(adj, vis1, order, a);
        }
    }

    order.push_back(key);
}

void rev_dfs(vector<int> rev[], vector<int> &vis2, int key)
{
    vis2[key] = 1;

    for (auto a : rev[key])
        if (!vis2[a])
            rev_dfs(rev, vis2, a);
}

int kosaraju(int V, vector<int> adj[])
{
    vector<int> rev[V];
    vector<int> order;
    vector<int> vis1(V, 0);
    vector<int> vis2(V, 0);
    int cnt = 0;

    for (int i = 0; i < V; ++i)
    {
        for (auto a : adj[i])
        {
            rev[a].push_back(i);
        }
    }

    for (int i = 0; i < V; ++i)
    {
        if (vis1[i] == 0)
            dfs(adj, vis1, order, i);
    }

    for (int i = V - 1; i >= 0; --i)
    {
        if (vis2[order[i]] == 0)
        {
            rev_dfs(rev, vis2, order[i]);
            cnt++;
        }
    }

    return cnt;
}