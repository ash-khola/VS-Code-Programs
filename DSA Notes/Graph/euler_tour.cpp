// In this algorithm we just need to main two arrays that is inTime and outTime and that can be find by simply doing a dfs in the graph or tree, basically we treat the given graph as a tree here:

// Finding inTime and out Time

void euler_tour(vector<int> &in, vector<int> &out, int &t)
{
	vis[key] = 1;
	in[key] = t;
	t++;   // time increamented here and note that intime and outime can't be same for a node, there will be a minimum of 1 unit difference b/w it 

	for (auto a : g[key])
	{
		if (!vis[a])
			dfs(g, vis, a, in, out, t);
	}

	out[key] = t;
}