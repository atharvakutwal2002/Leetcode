#include <bits/stdc++.h>
using namespace std;

// int thirdMax(vector<int> &nums)
// {
//     int max = INT_MIN;
//     int second_max = INT_MIN;
//     int third_max =INT_MIN;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if ((nums[i] == max) || (nums[i] == second_max) || (nums[i] == third_max))
//         {
//             continue;
//         }
//         if (nums[i] > max)
//         {
//             third_max = second_max;
//             second_max = max;
//             max = nums[i];
//         }
//         else if (nums[i] > second_max)
//         {
//             third_max = second_max;
//             second_max = nums[i];
//         }
//         else if (nums[i] > third_max)
//         {
//             third_max = nums[i];
//         }
//     }

//     if (third_max==INT_MIN)
//     {
//         return max;
//     }
//     return third_max;
// }

// int main()
// {
//     vector<int> v{2,2,3,1};
//     cout << thirdMax(v);

//     return 0;
// }

//   ----------final ----------------//

    int thirdMax(vector<int>& nums) {
      int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        bool exists_min = false;
        for(int num : nums){
            if(num == INT_MIN) exists_min = true;
            if(num == max1 || num == max2 || num <= max3) continue;
            if(num > max1){
                max3 = max2;
                max2 = max1;
                max1 = num;
            }else if(num > max2){
                max3 = max2;
                max2 = num;
            }else{
                max3 = num;
            }
        }
        if(max2 == INT_MIN || max3 == INT_MIN && !exists_min)
            return max1;
        return max3;
    }