// Given a reference of a node in a connected undirected graph.
// Return a deep copy (clone) of the graph.
// Each node in the graph contains a value (int) and a list (List[Node]) of its neighbors.

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    void clone(Node *node, Node *copy, vector<Node *> &vis )
    {
        vis[copy->val]=copy;
        
        // we will traverse the neighbors vector of the "node" and while traversing
        // if we found any unvisited node than we will make a new node for including it
        // in the clone and than recursively call the clone function to further traverse
        // the neighbors vector of the node we found, and finally after returning from 
        // the recursion we will push_back it in the neighbors vector of the copy
        
        for(auto a:node->neighbors) 
        {
            if(!vis[a->val])
            {
                Node *newNode=new Node(a->val);
                clone(a, newNode, vis);
                (copy->neighbors).push_back(vis[newNode->val]);
            }
            else
            {
                (copy->neighbors).push_back(vis[a->val]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        vector<Node *> vis(101, 0);
        if(!node)
            return NULL;
        Node *copy=new Node(node->val);
        clone(node, copy, vis);
        
        return copy;
    }
};