#include <vector>
#include <string>

using namespace std;

// Problem link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int max = 0;
        int sum = 0;

        for (int i = 0; i < sentences.size(); i++)
        {
            sum = 1;
            for (char ch : sentences[i])
            {
                if (ch == ' ')
                {
                    sum++;
                }
            }

            if (sum > max)
                max = sum;
        }

        return max;
    }
};