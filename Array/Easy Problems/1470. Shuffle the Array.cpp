#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> ans(nums.size());

        int x = 0;
        int j = n;

        for (int i = 0; i < n * 2; i++)
        {
            ans[i] = i % 2 ? nums[j++] : nums[x++];
        }

        return ans;
    }
};