#include <vector>
#include <string>

using namespace std;

// Problem link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int x = 0;

        for (auto op : operations)
        {
            if (op.find("+") != -1)
                x++;
            else
                x--;
        }

        return x;
    }
};