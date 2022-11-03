// Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

// Solution:

int findLongestConsecutiveSubsequence(int arr[], int n) {
    set<int> st;
    for(int i = 0; i<n; i++) {
        st.insert(arr[i]);
    }

    set<int> :: iterator it = s.begin();
    int prev = *it;
    int currCount = 1, maxCount = 1;
    it++;

    for(int i = 1; i < n; i++) {
        if(*it  = prev + 1) {
            currCount++;
        }
        else {
            currCount = 1;
        }

        prev = *it;
        maxCount = max(maxCount, currCount);
    }

    return maxCount;
}