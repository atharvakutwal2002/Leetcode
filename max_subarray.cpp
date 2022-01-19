#include <bits/stdc++.h>
using namespace std;
 

 //----------KADANE's Algorithm---------------//

int maxSubArray(vector<int> &nums)
{
    int max_so_far = nums[0];
    int max_ending_here = 0;
    int start = 0;
    int end = 0;
    int s = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here = max_ending_here + nums[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
        if (max_ending_here<0)
        {
            max_ending_here=0;
            s=i+1;
        }
        
    }
    return max_so_far;
}

int main()
{
    vector<int> v{5,4,-1,7,8};
    cout << maxSubArray(v);

    return 0;
}