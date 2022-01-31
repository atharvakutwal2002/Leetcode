#include <bits/stdc++.h>
using namespace std;

// int findPeakElement(vector<int> &nums)
// {
//     if (nums.size()==1)
//     {
//         return 0;
//     }
//     if (nums.size()==2)
//     {
//         if (nums[1]>nums[0])
//         {
//             return 1;
//         }
//         return 0;
        
//     }
    
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if ((nums[i]>nums[i+1]) && (nums[i]>nums[i-1]))
//         {
//             return i;
//         }
        
//     }
    
// }     heap buffer overflow for some cases 



//======================FINAL SOLUTION=======================//
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          int len = nums.size();
        if(len == 1)return 0;
        if(nums[0] > nums[1])return 0;
        if(nums[len-1] > nums[len-2]) return len-1;
        
        for(int i=1; i<len-1; i++){
            if(nums[i-1] < nums[i] && nums[i] > nums[i+1])return i;
        }
        return -1;
    }
};