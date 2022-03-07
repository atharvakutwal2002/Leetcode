#include <bits/stdc++.h>
using namespace std;

// int findfirst(vector<int> v, int target)
// {
//     int start = 0;
//     int end = v.size() - 1;
//     int ans = -1;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (v[mid] == target)
//         {
//             ans = mid;
//             end = mid - 1;
//         }else if(v[mid]< target){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     vector<int> arr{5, 7, 7, 8, 8, 10};
//     int target = 8;
//     int first=findfirst(arr,target);
//     int second=-1;
//     for (int i = first; i < arr.size(); i++)
//     {
//         if (arr[i]!= target)
//         {
//             second=(i-1);
//         }
        
//     }
//     cout<<first<<" "<<second<<endl;

//     return 0;
// }

// final solution

class Solution {
public:
   int getfirst(vector<int> v, int target,bool getfirst)
    {
        int start = 0;
        int end = v.size() - 1;
        int ans = -1;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (v[mid] == target)
            {
                ans = mid;
                if(getfirst)
                    {end = mid - 1;}
                else{
                    start=mid+1;
                }
            }else if(v[mid]< target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v(2,-1);
        int first= getfirst(nums,target,true);
        if(first==-1){
            return v;
        }
        int last=getfirst(nums,target, false);
        v[0]=first;
        v[1]=last;
        return v;
    }
};