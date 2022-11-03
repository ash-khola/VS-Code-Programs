// Given string S representing a postfix expression, the task is to evaluate the expression and find the final value. Operators will only include the basic arithmetic operators like *, /, + and -.

int evaluatePostfix(string S) {
    stack<int> s;
    char *ptr = &S[0];

    for(int i = 0; i < S.length(); i++) {
        if(*(ptr) == '*' or *ptr == '/' or *ptr == '+' or *ptr == '-') {
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if(*ptr == '*') {
                s.push(a*b);
            }
            else if(*ptr == '/') {
                s.push(b / a);
            }
            else if(*ptr == '+') {
                s.push(a + b);
            }
            else if(*ptr == '-') {
                s.push(b - a);
            }
        }
        else {
            s.push(*ptr - '0');
        }

        ptr++;
    }

    return s.top();
}

// Expected Time Complexity: O(|S|)
// Expected Auixilliary Space: O(|S|)

// For evaluation of prefix expression, do the same logic as of postfix, just traverse from right to left