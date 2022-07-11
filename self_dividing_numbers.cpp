#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool helper(int num)
    {
        int original = num;
        while (num > 0)
        {
            int remain = num % 10;
            if (remain == 0 || original % remain != 0)
            {
                return false;
            }
            num = num / 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;

        for (int i = left; i <= right; i++)
        {
            if (helper(i))
            {

                ans.push_back(i);
            }
        }
        return ans;
    }
};