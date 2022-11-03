// Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.


void dfs(vector<vector<char>> &grid, int vis[501][501], int i, int j, int n, int m)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
        return;

    if (grid[i][j] == '0')
    {
        vis[i][j] = 1;
        return;
    }

    if (vis[i][j] == 1)
        return;
    vis[i][j] = 1;

    dfs(grid, vis, i - 1, j, n, m);
    dfs(grid, vis, i, j + 1, n, m);
    dfs(grid, vis, i + 1, j, n, m);
    dfs(grid, vis, i, j - 1, n, m);
    dfs(grid, vis, i - 1, j - 1, n, m);
    dfs(grid, vis, i + 1, j + 1, n, m);
    dfs(grid, vis, i - 1, j + 1, n, m);
    dfs(grid, vis, i + 1, j - 1, n, m);
}

int numIslands(vector<vector<char>> &grid)
{
    ;

    int n = grid.size(), count = 0;
    int m = grid[0].size();

    int vis[501][501];

    memset(vis, 0, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0 and grid[i][j] == '1')
            {
                dfs(grid, vis, i, j, n, m);
                count++;
            }
        }
    }

    return count;
}