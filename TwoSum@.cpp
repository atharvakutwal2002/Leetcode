#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<int> &numbers, int target, vector<int> &ans)
    {
        int leftptr = 0;
        int rightptr = numbers.size() - 1;
        while (leftptr < rightptr)
        {
            int leftval = numbers[leftptr];
            int rightval = numbers[rightptr];
            if ((leftval + rightval) == target)
            {
                ans.push_back(leftptr + 1);
                ans.push_back(rightptr + 1);
                break;
            }
            else if ((leftval + rightval) < target)
            {
                leftptr++;
            }
            else
            {
                rightptr--;
            }
        }
    }
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> ans;
        helper(numbers, target, ans);
        return ans;
    }
};