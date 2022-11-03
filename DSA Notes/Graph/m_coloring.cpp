// Given an undirected graph and an integer M. The task is to determine if the graph can be colored with at most M colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices. Print 1 if it is possible to colour vertices and 0 otherwise.

bool is_valid(bool graph[101][101], int key, int n, vector<int> &col, int c)
{
    for (int i = 0; i < n; i++)
    {
        if (i != key)
        {
            if (graph[key][i] and col[i] == c)
                return false;
        }
    }
    return true;
}

bool dfs(bool graph[101][101], int m, int n, int node, vector<int> &col)
{
    if (node == n)
        return true;

    for (int i = 0; i < m; ++i)
    {
        col[node] = i;
        if (is_valid(graph, node, n, col, i))
        {
            if (dfs(graph, m, n, node + 1, col))
                return true;
        }
        // if(i == m-1)
        col[node] = -1; // this is necessary because the value of col[node] will be
                        // reassigned for all iterations except last one i.e i = m-1
    }

    return false;
}

bool graphColoring(bool graph[101][101], int m, int n)
{
    vector<int> col(n, -1);

    return dfs(graph, m, n, 0, col);
}