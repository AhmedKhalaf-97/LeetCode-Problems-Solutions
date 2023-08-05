#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int max = 0;
        int sum = 0;

        for (int j = 0; j < accounts.size(); j++)
        {
            sum = 0;
            for (int i = 0; i < accounts[j].size(); i++)
            {
                sum += accounts[j][i];
            }

            if (sum >= max)
                max = sum;
        }

        return max;
    }
};