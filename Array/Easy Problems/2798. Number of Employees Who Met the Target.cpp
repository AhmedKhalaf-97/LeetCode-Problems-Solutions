#include <vector>

using namespace std;

// Problem link: https://leetcode.com/problems/number-of-employees-who-met-the-target/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target)
    {
        int result = 0;

        for (int hr : hours)
        {
            if (hr >= target)
            {
                result++;
            }
        }

        return result;
    }
};