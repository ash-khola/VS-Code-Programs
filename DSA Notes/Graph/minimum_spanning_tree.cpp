// Given a weighted, undirected and connected graph of V vertices and E edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

// There are 2 algo's to find minimum spanning tree
// 1. Kruskal's Algo
// 2. Prim's Algo

// Kruskal's algo

int parent[1000];
int size[1000];

void make(int i)
{
    parent[i] = i;
    size[i] = 1;
}

int find(int a)
{
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int spanningTree(int V, vector<vector<int>> adj[])
{
    // code here
    vector<pair<int, pair<int, int>>> edge;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            edge.push_back({adj[i][j][1], {i, adj[i][j][0]}});
        }
    }

    // for(int i = 0; i < V; i++){
    //       for(auto it : adj[i]){
    //       edge.push_back({it[1], {i,  it[0]}});
    //       }
    //   }

    sort(edge.begin(), edge.end());

    for (int i = 0; i < V; i++)
    {
        make(i);
    }

    int m_weight = 0;

    for (auto &eg : edge)
    {
        int wt = eg.first;
        int u = eg.second.first;
        int v = eg.second.second;

        if (find(u) == find(v))
            continue;

        Union(u, v);

        m_weight += wt;
    }

    return m_weight;
}

// Prim's algo

int spanningTree(int v, vector<vector<int>> adj[])
{
    // code here
    int key[v];
    int parent[v];
    bool mst[v];

    for (int i = 0; i < v; ++i)
        mst[i] = false, key[i] = INT_MAX;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    key[0] = 0;
    pq.push({0, 0});

    // for(int i = 0; i<v-1; i++)
    while (!pq.empty()) // Above condition should also work for the loop
                        // though it is not working (don;t know why ?)
    {
        int u = pq.top().second;
        pq.pop();

        mst[u] = true;

        for (auto it : adj[u])
        {
            int vtx = it[0];
            int wt = it[1];

            if (mst[vtx] == false and key[vtx] > wt)
            {
                key[vtx] = wt;
                pq.push({wt, vtx});
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < v; i++)
    {
        sum += key[i];
    }

    return sum;
}

// Problem on Kruskal's algo:

// The member states of the UN are planning to send  people to the moon. They want them to be from different countries. You will be given a list of pairs of astronaut ID's. Each pair is made of astronauts from the same country. Determine how many pairs of astronauts from different countries they can choose from.

#include <bits/stdc++.h>
using namespace std;

long long n = 1e+5;

vector<long long> parent(n);
vector<long long> size(n);

void make(long long i)
{
    parent[i] = i;
    size[i] = 1;
}

long long find(long long a)
{
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}

void Union(long long a, long long b)
{
    a = find(a);
    b = find(b);

    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);

        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    long long n, m, u, v;
    cin >> n >> m;

    for (long long i = 0; i < n; i++)
    {
        make(i);
    }

    for (long long i = 0; i < m; i++)
    {
        cin >> u >> v;
        Union(u, v);
    }

    unordered_map<long long, long long> mp;

    for (long long i = 0; i < n; i++)
    {
        mp[parent[i]]++;
    }

    long long val = (n * (n - 1)) / 2;

    for (auto m : mp)
    {
        val -= (m.second * (m.second - 1)) / 2;
    }

    cout << val << endl;
}
