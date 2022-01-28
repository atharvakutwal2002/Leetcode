#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int x;
    sort(nums.begin(), nums.end());
    int length = nums.size();
    int expectedsum = length * (length + 1) / 2;
    int actualsum = 0;
    for (int i = 0; i < length; i++)
    {
        actualsum += nums[i];
    }

    return expectedsum - actualsum;
}
int main()
{
    vector<int> v{3, 0, 1};
    cout << missingNumber(v);
    return 0;
}

// by doing sum of n (n is the size ) natural numbers and subtracting it from the sum of given array will give us the required missing number .