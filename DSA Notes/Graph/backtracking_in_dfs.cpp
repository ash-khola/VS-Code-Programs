// Given a graph, a source vertex in the graph, and a number k, find if there is a simple path, of path length greater than or equal to k,(without any cycle) starting from a given source and ending at any other vertex. Source vertex should always be  0.

void dfs(vector<pair<int, int>> g[], vector<int> &path, int key, int cost, int k, bool &ans)
{
    if (ans == true)
        return;

    if (cost >= k)
    {
        ans = true;
        return;
    }

    path[key] = 1;

    for (auto a : g[key])
    {
        if (!path[a.first])
        {
            dfs(g, path, a.first, cost + a.second, k, ans);
        }
    }

    path[key] = 0;
}

bool pathMoreThanK(int V, int E, int k, int *a)
{
    vector<pair<int, int>> g[V + 1];
    vector<int> path(V);
    bool ans = false;

    for (int i = 0; i < 3 * E - 2; i += 3)
    {
        g[a[i]].push_back({a[i + 1], a[i + 2]});
        g[a[i + 1]].push_back({a[i], a[i + 2]});
    }

    dfs(g, path, 0, 0, k, ans);

    return ans;
}