// The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed Graph. The Graph is represented as an adjacency matrix, and the matrix denotes the weight of the edges (if it exists) else -1.

void shortest_distance(vector<vector<int>> &matrix)
{
    // Code here

    for (int k = 0; k < matrix.size(); k++)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
                if (matrix[i][k] != -1 and matrix[k][j] != -1)
                {
                    if (matrix[i][j] == -1)
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                    else
                        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }
    }
}