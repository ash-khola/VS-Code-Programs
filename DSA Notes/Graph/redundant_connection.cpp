// In this problem, a tree is an undirected graph that is connected and has no cycles.

// You are given a graph that started as a tree with n nodes labeled from 1 to n, with one additional edge added. The added edge has two different vertices chosen from 1 to n, and was not an edge that already existed. The graph is represented as an array edges of length n where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the graph.

// Return an edge that can be removed so that the resulting graph is a tree of n nodes. If there are multiple answers, return the answer that occurs last in the input.


// Approach : Will make use of Union and Find

 
int findParent(int key, vector<int> &parent) {
    if(parent[key] != key) {
        return parent[key] = findParent(parent[key], parent);
    }
    
    return parent[key];
}

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    vector<int> parent(edges.size() + 1);
    
    for(int i = 0; i < edges.size() + 1; i++) {
        parent[i] = i;
    }
    
    vector<int> remove_edge;
    
    for(int i = 0; i < edges.size(); i++) {
        int p1 = findParent(edges[i][0], parent);
        int p2 = findParent(edges[i][1], parent);
        
        if(p1 == p2) remove_edge = edges[i];
        
        parent[p1] = p2;
    }
    
    return remove_edge;
}