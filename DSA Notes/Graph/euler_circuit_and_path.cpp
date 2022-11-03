// Eulerian Path is a path in graph that visits every edge exactly once. Eulerian Circuit is an Eulerian Path which starts and ends on the same vertex. The task is to find that there exists the Euler Path or circuit or none in given undirected graph with V vertices and adjacency list adj.

// Solution:
        //     If no. of odd degree nodes = 0  → Euler circuit
        //     If no. of odd degree nodes = 2  → Euler path
        //     In all other cases neither Euler circuit nor Euler path
            
        //     Note:- Disconnected graphs can also form Euler Circuit and Euler path, if they follow above conditions.  