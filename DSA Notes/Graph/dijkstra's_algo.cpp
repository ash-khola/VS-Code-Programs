// Given a weighted, undirected and connected graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S. (No negative element is present in the graph even dijakstra's algo don't work for graph with negative element)

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    vector<int> sd(V, INT_MAX);
    sd[S] = 0;
    set<pair<int, int>> st;
    st.insert({0, S});
    vector<int> vis(V);
    vis[S] = 1;

    while (!st.empty())
    {
        int prev_dist = (*st.begin()).first;
        int prev = (*st.begin()).second;
        vis[prev] = 1;
        st.erase(st.begin());

        for (int i = 0; i < adj[prev].size(); i++)
        {
            int next = adj[prev][i][0];
            int next_dist = adj[prev][i][1];
            st.erase(st.begin()); // We are erasing the edge from set, because it is guaranteed that it will not be contributing anymore
            if (vis[next] == 1)
                continue;
            if (sd[next] > sd[prev] + next_dist)
            {
                sd[next] = sd[prev] + next_dist;
                st.insert({sd[next], next});
            }
        }
    }

    return sd;
}

// T.C = O(E * log(V))
// T.C: O(V)


// ********************* Example **************************

// You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.
// We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.

// Approach : Just apply simple Dijakstra's algo

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int, int>> adj[n + 1];
    
    for(int i = 0; i < times.size(); i++) {
        adj[times[i][0]].push_back({times[i][1], times[i][2]});
    }
    
    priority_queue<pair<int, int>> pq;
    pq.push({0, k});
    
    vector<int> dist(n + 1, INT_MAX);
    dist[k] = 0;
    
    while(!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        
        int cur_src = p.second;
        int cur_dist = p.first;
        
        for(auto a : adj[cur_src]) {
            if(dist[a.first] > cur_dist + a.second) {
                dist[a.first] = cur_dist + a.second;
                pq.push({dist[a.first], a.first});
            }
        }            
    }
    
    int minTime = INT_MIN;
    
    for(int i = 1; i <= n; i++) {
        if(dist[i] == INT_MAX) {
            return -1;
        }
        
        minTime = max(minTime, dist[i]);
    }
    
    return minTime;
}