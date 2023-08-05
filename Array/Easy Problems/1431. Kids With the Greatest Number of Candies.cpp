#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool> result(candies.size());
        // int maxCandies = *max_element(candies.begin(), candies.end());
        int maxCandies = candies[0];

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > maxCandies)
            {
                maxCandies = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= maxCandies)
            {
                result[i] = true;
            }
            else
            {
                result[i] = false;
            }
        }

        return result;
    }
};