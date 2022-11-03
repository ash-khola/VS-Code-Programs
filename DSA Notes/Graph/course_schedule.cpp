// There are a total of numCourses courses you have to take, labelled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

// For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
// Return true if you can finish all courses. Otherwise, return false.

// Solution:

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        
        for(int i = 0; i < prerequisites.size(); i++) {       // creating adjacency matrix
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
                
        vector<int> in(numCourses);            // indegree vector
        
        for(int i = 0; i < prerequisites.size(); i++) {
            in[prerequisites[i][0]]++;          // increasing indegree for the elements which are dependent on some other elements i.e for the first element of the vector 
        }
        
        queue<int> q;
        
        for(int i = 0; i < numCourses; i++) {
            if(in[i] == 0) {
                q.push(i);    // finding the courses which can be taken without taking any other course
            }
        } 
        
        while(!q.empty()) {
            int course_taken = q.front();   // taking this course then reducing the indegree by 1 of all the course which are dependent on this course
            q.pop();
            
            for(auto a : adj[course_taken]) {
                in[a]--;
                if(in[a] == 0) {
                    q.push(a);
                }
            }
        }
        
        for(int i = 0; i < numCourses; i++) {
            if(in[i] != 0) {
                return false;    // if some course/es is still left with non zero indegree than, that course/courses can't be taken
            }
        }
        
        return true;
    }
};

