// There are n servers numbered from 0 to n - 1 connected by undirected server-to-server connections forming a network where connections[i] = [ai, bi] represents a connection between servers ai and bi. Any server can reach other servers directly or indirectly through the network.

// A critical connection is a connection that, if removed, will make some servers unable to reach some other server.
// Return all critical connections in the network in any order.

class Solution {
public:
    vector<vector<int>> critical_edge;
    vector<int> disc_time;
    vector<int> lowest_disc_node;
        
    void dfs(int key, int parent, vector<vector<int>> &graph, vector<int> &vis, int &time) {
        vis[key] = 1;
        disc_time[key] = time;
        lowest_disc_node[key] = time;
        time++;
        
        for(auto a : graph[key]) {
            if(a == parent) continue;
            else if(vis[a]) {
                lowest_disc_node[key] = min(lowest_disc_node[key], disc_time[a]);
            }
            else {
                dfs(a, key, graph, vis, time);
                lowest_disc_node[key] = min(lowest_disc_node[key], lowest_disc_node[a]);
                if(lowest_disc_node[a] > disc_time[key]) {
                    critical_edge.push_back({key, a});
                }
            }       
        }
    }

    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<vector<int>> graph(n);
        
        for(int i = 0; i < connections.size(); i++) {
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        
        vector<int> vis(n, 0);
        disc_time.resize(n);
        lowest_disc_node.resize(n);
        int time = 0;
        
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, -1, graph, vis, time);
            }
        }
        
        return critical_edge;
    }
};