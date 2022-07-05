#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    if (nums.size()==1)
    {
        return false;
    }
    
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

int main(){
    vector<int> v{1,1,1,3,3,4,3,2,4,2};
    cout<<containsDuplicate(v);

    return 0;
}


