// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
// In case of multiple subarrays, return the subarray which comes first on moving from left to right.

// Solution:

vector<int> subarraySum(int arr[], int n, int targetSum) {
    int curSum = arr[0];
    int start = 0, end, i;
    vector<int> ans;

    for(i = 1; i <= n; i++) {
        while(curSum > targetSum and start < i-1) {   // i - 1 is used because there should be atleast one element in the subarray, it can't be empty
            surSum -= arr[start++];
        }

        if(curSum == targetSum) {
            end = i-1;
            break;
        }

        if(i < n) {
            curSum += arr[i];
        }
    }

    if(end == -1) {
        ans.push_back(-1);
    }

    else {
        ans.push_back(start + 1);  // one  based indexing used to give the answer
        ans.push_back(end + 1);
    }

    return ans;
}

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)