#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
        for (int num : nums)
        {
            if (num > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if (num > max2)
            {
                max3 = max2;
                max2 = num;
            }
            else if (num > max3)
            {
                max3 = num;
            }
            if (num < min1)
            {
                min2 = min1;
                min1 = num;
            }
            else if (num < min2)
            {
                min2 = num;
            }
        }
        return max(max1 * max2 * max3, min1 * min2 * max1);
    }
};


//=========second approach=======//
//--------= simple one=---------//
int maxProduct(vector <int> nums){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    return max((nums[0]*nums[1]*nums[n-1]),(nums[n-1]*nums[n-2]*nums[n-3]));
} 