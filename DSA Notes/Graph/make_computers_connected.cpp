// You are given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected.
// Return the minimum number of times you need to do this in order to make all the computers connected. If it is not possible, return -1.


void dfs(vector<int> g[], vector<int> &vis, int i)
{
    vis[i] = 1;
    for (auto a : g[i])
    {
        if (!vis[a])
        {
            dfs(g, vis, a);
        }
    }
}

int makeConnected(int n, vector<vector<int>> &connections)
{
    if (n - 1 > connections.size())
        return -1;
    vector<int> g[n];
    vector<int> vis(n, 0);
    for (int i = 0; i < connections.size(); i++)
    {
        g[connections[i][0]].push_back(connections[i][1]);
        g[connections[i][1]].push_back(connections[i][0]);
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(g, vis, i);
            cnt++;
        }
    }
    return cnt - 1; 
}