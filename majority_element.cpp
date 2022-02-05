#include <bits/stdc++.h>
using namespace std;

// int majorityElement(vector<int> &nums)
// {
//     int n=nums.size();
//     int count =0;
//     int temp=0;
//     sort(nums.begin(),nums.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i]==nums[i+1])
//         {
//             temp++;
//             if (temp> count)
//             {
//                 count=temp;
//             }
//             return count;
//         }
//         temp=0;
//     }
//     return count;
    
// }

int majorityElement(vector<int> &nums){
    sort(nums.begin(),nums.end());
    return nums[(int)nums.size()/2];
}