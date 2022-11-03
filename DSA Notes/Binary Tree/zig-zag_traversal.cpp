vector<int> zigZagTraversal(Node *root)
{
    // Code here
    queue<Node *> q;
    vector<int> ans, temp;

    bool left_to_right = true;

    q.push(root);

    while (!q.empty())
    {
        int k = q.size();
        for (int i = 0; i < k; i++)
        {
            temp.push_back(q.front()->data);

            if (q.front()->left)
                q.push(q.front()->left);

            if (q.front()->right)
                q.push(q.front()->right);

            q.pop();
        }
        if (!left_to_right)
        {
            reverse(temp.begin(), temp.end());
        }
        left_to_right = !left_to_right;

        for (int i = 0; i < k; i++)
        {
            ans.push_back(temp[i]);
        }
        temp.clear();
    }

    return ans;
}