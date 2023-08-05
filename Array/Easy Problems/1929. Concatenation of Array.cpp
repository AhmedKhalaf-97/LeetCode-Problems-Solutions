#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/concatenation-of-array/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int numsSize = nums.size();
        int n = numsSize + numsSize;

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i % numsSize];
        }

        return ans;
    }
};