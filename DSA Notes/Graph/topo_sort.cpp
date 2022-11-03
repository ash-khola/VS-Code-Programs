// Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.

vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> ans;
    vector<int> in(V, 0);
    queue<int> q;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            in[adj[i][j]]++;
        }
    }

    for (int i = 0; i < V; i++)
        if (in[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int tn = q.front();
        q.pop();
        ans.push_back(tn);

        for (int i = 0; i < adj[tn].size(); i++)
        {
            in[adj[tn][i]]--;
            if (in[adj[tn][i]] == 0)
                q.push(adj[tn][i]);
        }
    }

    return ans;
}

// Example 1:-
// Minimum time taken by each job to be completed given by a Directed Acyclic Graph (Jobs U and V such that Job V can only be started only after completion of Job U.)

vector<int> minimumTime(int n, vector<vector<int>> &edges, int m)
{
    // code here 
    vector<int> job(n, 0);
    vector<int> indeg(n + 1, 0);
    queue<int> q;
    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }

    for (int i = 1; i <= n; i++)
    {
        for (auto a : adj[i])
        {
            indeg[a]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
            job[i - 1] = 1;
        }
    }

    while (!q.empty())
    {
        int prev = q.front();
        q.pop();

        for (auto a : adj[prev])
        {
            indeg[a]--;
            if (indeg[a] == 0)
            {
                job[a - 1] = job[prev - 1] + 1;
                q.push(a);
            }
        }
    }

    return job;
}

// Example 2:-
// Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.

// This can be solved by applying topo sort in dfs

void dfs(vector<vector<int>> &g, vector<int> &vis, string &ans, int i)
{
    vis[i] = 1;

    for (int j = 0; j < g[i].size(); j++)
    {
        if (!vis[g[i][j]])
        {
            dfs(g, vis, ans, g[i][j]);
        }
    }

    char temp = i + 'a';

    ans = temp + ans;
}

string findOrder(string dict[], int N, int k)
{
    // code here
    vector<vector<int>> g(k);
    vector<int> vis(k, 0);
    string ans = "";

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < min(dict[i].length(), dict[i + 1].length()); j++)
        {
            if (dict[i][j] != dict[i + 1][j])
            {
                g[dict[i][j] - 'a'].push_back(dict[i + 1][j] - 'a');
                break;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (!vis[i])
        {
            dfs(g, vis, ans, i);
        }
    }

    return ans;
}