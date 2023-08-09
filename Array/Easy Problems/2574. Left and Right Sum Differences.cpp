#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        vector<int> answer(nums.size());
        vector<int> leftSum(nums.size());
        vector<int> rightSum(nums.size());

        int sum = 0;

        for (int i = 0; i < leftSum.size(); i++)
        {
            leftSum[i] = sum;
            sum += nums[i];
        }

        sum = 0;
        for (int i = rightSum.size() - 1; i >= 0; i--)
        {
            rightSum[i] = sum;
            sum += nums[i];
        }

        for (int i = 0; i < answer.size(); i++)
        {
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }

        return answer;
    }
};