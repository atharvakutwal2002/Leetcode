#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        int i=0;
        int n=nums.size();
        while(i<n-1){
            if(nums[i]==nums[i+1])
                i=i+2;
            else
                return nums[i];
        }
        return nums[n-1];
    
    }
};

// int main()
// {
//     vector<int> v{2, 2, 1};

//     cout << singleNumber(v);
//     return 0;
// }