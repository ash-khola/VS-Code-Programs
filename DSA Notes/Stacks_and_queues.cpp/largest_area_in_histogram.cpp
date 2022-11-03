// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit, there will be N bars height of each bar will be given by the array arr.


// Solution:

long long getMaxArea(long long arr[], int n)
{
    // Your code here
    vector<long long> left_to_right(n), right_to_left(n);
    stack<int> st;
    
    for(int i = 0; i < n; i++) {
        if(st.empty()) {
            left_to_right[i] = 0;
            st.push(0);
        }
        else {
            while(!st.empty() and arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                left_to_right[i] = 0;
            }
            else {
                left_to_right[i] = st.top() + 1;
            }
            st.push(i);
        }
    }
    
    while(!st.empty()) {
        st.pop();
    }
    
    for(int i = n-1; i >= 0; i--) {
        if(st.empty()) {
            right_to_left[i] = i;
            st.push(n-1);
        }
        else {
            while(!st.empty() and arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                right_to_left[i] = n - 1;
            }
            else {
                right_to_left[i] = st.top() - 1;
            }
            st.push(i);
        }
    }
    
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        ans = max(ans, (right_to_left[i] - left_to_right[i] + 1) * arr[i]);
    }
    
    return ans;
}

// Expected Time Complxity : O(N)
// Expected Auxilliary Space : O(N)