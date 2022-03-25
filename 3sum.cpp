#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<int> ans;
        int i = 0, j = 1, k = 2;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size()-1; j++)
            {
                for (int k = 0; k < nums.size()-2; k++)
                {
                    if (i!=j && i!=k && j!=k && (nums[i] + nums[j] + nums[k] == 0))
                    {
                        ans.push_back(i);
                        ans.push_back(j);
                        ans.push_back(k);
                    }
                    
                }
            }
        }
        return ans;
    }
};
