#include <bits/stdc++.h>
using namespace std;

//----------BRUTE FORCING-----------//

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector <int> ans;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==target)
        {
            ans.push_back(i);
        }
        
    }
    return ans;
}