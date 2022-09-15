#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int l = nums.size() - 1;
        int s = 0;
        int mid = (l + s) / 2;
        while (s <= l)
        {

            if (nums[mid] == target)
            {
                return true;
            }
            else if (nums[s] == nums[mid] && nums[l] == nums[mid])
            {
                ++s;
                --l;
            }
            else if (nums[s] <= nums[mid])
            {
                if ((nums[s] <= target) && (nums[mid] > target))
                {
                    l = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }

            else
            {
                if ((nums[mid] < target) && (nums[l] >= target))
                {
                    s = mid + 1;
                }
                else
                {
                    l = mid - 1;
                }
            }

            mid = (l + s) / 2;
        }

        return false;
    }
};