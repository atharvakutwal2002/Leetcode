#include <bits/stdc++.h>
using namespace std;

// int search(vector<int> &nums, int target)
// {
//     int start = 0;
//     int end = nums.size() - 1;
//     int mid;
//     while (start <= end)
//     {

//         int mid = (start + end) / 2;
//         if (nums[mid]==target)
//         {
//             return mid;
//         }else{
//             if (target <nums[mid])
//             {
//                 end=mid-1;
//             }else{
//                 start=mid+1;
//             }

//         }

//     }

//     return -1;
// }

// int main()
// {
//     vector<int> v{-1,0,3,5,9,12};
//     int target = 2;
//     cout << search(v, target) << endl;
//     return 0;
// }

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start <= end)
        {

            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else
            {
                if (target < nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }

        return -1;
    }
};