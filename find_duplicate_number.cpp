#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i]==nums[i+1])
        {
            return nums[i];
            break;
        }
        
    }
    return -1;
}

int main(){
    vector <int> v{3,1,3,4,2};
    cout<<findDuplicate(v);

    return 0;
}