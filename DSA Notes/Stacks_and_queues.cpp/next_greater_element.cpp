// Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.
// The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.

// Solution:

vector<int> nextGreaterElements(vector<int>& nums) {
    stack<int> st;
    vector<int> res(nums.size());
    
    for(int i = nums.size() - 1; i >= 0; i--) {
        if(st.empty()) {
            res[i] = -1;
            st.push(i);
        }
        else {
            while(!st.empty() and nums[st.top()] <= nums[i]) st.pop();
            if(st.empty()) res[i] = -1;
            else {
                res[i] = nums[st.top()];
            }
            st.push(i);
        }
    }
    
    for(int i = nums.size() - 1; i >= 0; i--) {
        if(res[i] == -1) {
            while(!st.empty() and nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if(st.empty()) res[i] = -1;
            else res[i] = nums[st.top()];
        }
    }
    
    return res;
}