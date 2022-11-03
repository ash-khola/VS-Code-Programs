// Given an adjacency list of a graph adj  of V no. of vertices having 0 based index. Check whether the graph is bipartite or not.

bool isBipartite(int V, vector<int> adj[])
{
    // first deal with the scenario where graph is not connected
    //  so for v vertices define the color as -1 initially
    vector<int> c(V, -1);
   
    // now go through the problem of disconnected graph
    for (int i = 0; i < V; i++)
    {
        if (c[i] == -1)
        {
            c[i] = 1;

            queue<int> q;
            q.push(i);
            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                // checking self loop
                for (int j : adj[u])
                {
                    // if color is not assigned then do it
                    if (c[j] == -1)
                    {
                        // c[j]=c[u]?0:1;
                        if (c[u] == 1)
                            c[j] = 0;
                        else
                            c[j] = 1;
                        q.push(j);
                    }
                    else if (c[j] == c[u])
                        return false;
                }
            }
        }
    }
    return true;
}

// ***************** Example: ********************
// Two Clique Problem (Check if Graph can be divided in two Cliques)

// Here we mill make the complement graph of the given graph and checkif the comliment graph is bipartite or not and if it is, then the original graph can be divided into two cliques.

// do the following to make the complement graph 
vector<int> comp[v];
vector<int> temp(v,0);

for(int i = 0; i<v; i++) {
    temp[i] = 1;
    for(auto a:g[i]) {
        temp[a] = 1;
    }

    for(int j = 0; j<v; j++) {
        if(temp[j] == 0) {
            comp[i].push_back(j);
            comp[j].push_back(i);
        }
    }   

    temp.clear();
}