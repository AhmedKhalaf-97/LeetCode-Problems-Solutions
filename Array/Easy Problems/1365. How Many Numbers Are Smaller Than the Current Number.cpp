#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> result(nums.size());

        for (int i = 0; i < result.size(); i++)
        {
            int count = 0;

            for (int j = 0; j < nums.size(); j++)
            {
                if (j != i && nums[i] > nums[j])
                {
                    count++;
                }
            }

            result[i] = count;
        }

        return result;
    }
};