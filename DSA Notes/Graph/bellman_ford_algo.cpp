// Given a weighted directed graph with n nodes and m edges. Nodes are labeled from 0 to n-1, the task is to check if it contains a negative weight cycle or not.
// Note: edges[i] is defined as u, v and weight.

int isNegativeWeightCycle(int n, vector<vector<int>> edges)
{
    // Code here
    vector<int> dist(n, 1000000);
    dist[0] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto &edge : edges)
        {
            if (dist[edge[0]] + edge[2] < dist[edge[1]])
            {
                dist[edge[1]] = dist[edge[0]] + edge[2];
            }
        }
    }

    for (auto &edge : edges)
    {
        if (dist[edge[0]] + edge[2] < dist[edge[1]])
        {
            return 1;
        }
    }

    return 0;
}