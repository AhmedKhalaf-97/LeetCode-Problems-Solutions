#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                count += (nums[i] == nums[j]);
            }
        }

        return count;
    }
};