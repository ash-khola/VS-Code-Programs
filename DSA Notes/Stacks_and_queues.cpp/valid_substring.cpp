// Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid(well-formed) parentheses substring.
// NOTE: Length of the smallest valid substring () is 2.

// Solution:

int findMaxLen(string s) {
    // code here
    stack<char> st;
    stack<int> index;
    index.push(-1);
    int ans = 0;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
            index.push(i);
        }
        else {
            if(!st.empty()) {
                index.pop();
                st.pop();
                ans = max(ans, i - index.top());
            }
            else {
                index.push(i);
            }
        }
    }
    
    return ans;
}

// Expected Time Complexity:O(n)
// Expected Auxiliary Space: O(n)   