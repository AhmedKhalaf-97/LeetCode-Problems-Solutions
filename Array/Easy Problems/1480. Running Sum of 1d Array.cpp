#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> runningSum(nums.size());

        int sum = 0;

        for (int i = 0; i < runningSum.size(); i++)
        {
            sum += nums[i];
            runningSum[i] = sum;
        }

        return runningSum;
    }
};