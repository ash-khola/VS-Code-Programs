// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.


// O(n) T.C and O(n) space T.c
int celebrity(vector<vector<int> >& M, int n) 
{
    // code here 
    stack<int> st;
    
    for(int i = 0; i < n; i++) {
        st.push(i);
    }
    
    while(st.size() != 1) {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        
        if(M[a][b] == 1 and M[b][a] == 0) {
            st.push(b);
        }
        
        else {
            st.push(a);
        }
    }
    
    if(st.empty()) {
        return -1;
    }
    
    int potential_celb = st.top();
    
    for(int i = 0; i<n; i++) {
        if(i != potential_celb) {
            if(M[i][potential_celb] == 0 or M[potential_celb][i] == 1) {
                return -1;
            }
        }
    }
    
    return potential_celb;
}

// ***********************************************************

// O(n) T.C and O(1) space T.c 
int celebrity(vector<vector<int> >& M, int n) {
    int potential_celb = 0;

    for(int i = 1; i < n; i++) {
        if(M[potential_celb][i] == 1) {
            potential_celb = i;
        }
    }

    for(int i = 0; i < n; i++) {
        if(i != potential_celb) {
            if(M[potential_celb][i] == 1 or M[i][potential_celb] == 0) {
                return -1;
            }
        }
    }

    return potential_celb;
}