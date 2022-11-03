// Given a Directed Graph with V vertices(Numbered from 0 to V - 1) and E edges, check whether it contains any cycle or not .

bool solve(int src, vector<int> adj[], vector<int> &path, vector<int> &vis)
{
    vis[src] = 1;
    path[src] = 1;

    for (auto x : adj[src])
    {
        if (!vis[x])
        {
            bool conf = solve(x, adj, path, vis);
            if (conf == true)
                return true;
        }
        else if (path[x])
            return true;
    }
    path[src] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    // code here
    vector<int> vis(V, 0);
    vector<int> path(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            bool c = solve(i, adj, path, vis);
            if (c == true)
                return true;
        }
    }

    return false;
}

// ************************ Cycle Detection in undirected graph ************************


// Unlike directed graph we don't require trace of path here, visited vector will handle the task of it 

void solve(int src, vector<int> adj[], bool &ans, vector<int> &vis, int parent)
{
    if (ans)
        return;
    vis[src] = 1;

    for (auto a : adj[src])
    {
        if (!vis[a])
        {
            solve(a, adj, ans, vis, src);
        }
        else if (a != parent)
        {
            ans = true;
            return;
        }
    }
}

bool isCycle(int V, vector<int> adj[])
{
    // Code here
    vector<int> vis(V, 0);
    bool ans = false;
    int p = -1;
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            solve(i, adj, ans, vis, p);
            if (ans)
                return true;
        }
    }
    return false;
}



// Example:-

// There are a total of N tasks, labeled from 0 to N-1. Some tasks may have prerequisites, for example to do task 0 you have to first complete task 1, which is expressed as a pair: [0, 1]
// Given the total number of tasks N and a list of prerequisite pairs P, find if it is possible to finish all tasks.

// Solution:
// This problem can be done by topo sort, and also by simply detecting whether a cycle exists or not in the graph because if a cycle exists then we will not be able to all the tasks.