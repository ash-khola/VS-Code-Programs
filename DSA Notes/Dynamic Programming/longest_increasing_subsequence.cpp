// Given an integer array nums, return the length of the longest strictly increasing subsequence.

// Solution:
// Can be solved using simple dp approach but the T.C will be O(n^2), here the index of dp array is itself equal to the length of the increasing subsequence

int lengthOfLIS(vector<int> &nums)
{
    vector<int> dp(nums.size() + 1, INT_MAX);
    dp[0] = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int idx = upper_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
        if (dp[idx - 1] == nums[i])
        {
            continue; // to avoid aloting new index to suplicate elements  ex : [7, 7, 7, 7, 7] ans should be 1 but if this "if" condition would not have been introduced than it will give answer as 5 
        }
        else if (dp[idx] > nums[i])
        {
            dp[idx] = nums[i];
        }
    }

    int max_len;

    for (int i = nums.size(); i >= 0; i--)
    {
        if (dp[i] != INT_MAX)
        {
            max_len = i;
            break;
        }
    }

    return max_len;
}

// T.C : O(n * log(n))   // upper_bound ----> O(log(n))
// s.C : O(n)