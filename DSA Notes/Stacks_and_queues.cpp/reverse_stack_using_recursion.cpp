// You are given a stack St. You have to reverse the stack using recursion.

void insert_at_bottom(stack<int> &st, int x) {
    if(st.size() == 0) {
        st.push(x);
        return;
    }
    
    int num = st.top();
    st.pop();
    insert_at_bottom(st, x);
    
    st.push(num);
}

void solve(stack<int> &st) {
    if(st.size() == 0) {
        return;
    }
    
    int num = st.top();
    st.pop();
    
    solve(st);
    insert_at_bottom(st, num);
}

stack<int> Reverse(stack<int> St) {
    solve(St);
    return St;
}

// T.C = O(N^2)
// S.C = O(N)  // StackFrame spcae including both recursive functions