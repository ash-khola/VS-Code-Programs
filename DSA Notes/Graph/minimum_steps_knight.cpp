// Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
{
    // Code here
    int xi = KnightPos[0], yi = KnightPos[1];
    int xt = TargetPos[0], yt = TargetPos[1];
    queue<pair<int, int>> q;
    q.push({xi, yi});

    int a[1005][1005];

    for (int i = 0; i < 1005; i++)
    {
        for (int j = 0; j < 1005; j++)
        {
            a[i][j] = 0;
        }
    }

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;

        q.pop();

        if (i + 1 <= N and j + 2 <= N and a[i + 1][j + 2] == 0)
        {
            a[i + 1][j + 2] = a[i][j] + 1;
            q.push({i + 1, j + 2});
        }

        if (i + 1 < N and j - 2 >= 1 and a[i + 1][j - 2] == 0)
        {
            a[i + 1][j - 2] = a[i][j] + 1;
            q.push({i + 1, j - 2});
        }

        if (i + 2 <= N and j + 1 <= N and a[i + 2][j + 1] == 0)
        {
            a[i + 2][j + 1] = a[i][j] + 1;
            q.push({i + 2, j + 1});
        }

        if (i + 2 <= N and j - 1 >= 1 and a[i + 2][j - 1] == 0)
        {
            a[i + 2][j - 1] = a[i][j] + 1;
            q.push({i + 2, j - 1});
        }

        if (i - 1 >= 1 and j + 2 <= N and a[i - 1][j + 2] == 0)
        {
            a[i - 1][j + 2] = a[i][j] + 1;
            q.push({i - 1, j + 2});
        }

        if (i - 1 >= 1 and j - 2 >= 1 and a[i - 1][j - 2] == 0)
        {
            a[i - 1][j - 2] = a[i][j] + 1;
            q.push({i - 1, j - 2});
        }

        if (i - 2 >= 1 and j + 1 <= N and a[i - 2][j + 1] == 0)
        {
            a[i - 2][j + 1] = a[i][j] + 1;
            q.push({i - 2, j + 1});
        }

        if (i - 2 >= 1 and j - 1 >= 1 and a[i - 2][j - 1] == 0)
        {
            a[i - 2][j - 1] = a[i][j] + 1;
            q.push({i - 2, j - 1});
        }
    }

    return a[xt][yt];
}