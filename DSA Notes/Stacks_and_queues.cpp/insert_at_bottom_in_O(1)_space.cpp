// Actually it is noit using any data structure therfore we say that it is a O(1) slution, though the stackFrame space will be O(n)

void inser_at_pbottom(stack<int> &st, int x){
    if(st.empty()) {
        s.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    insert_at_bottom(st, x);
    s.push(num);

    return;
}