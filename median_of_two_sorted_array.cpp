#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++)
        {
            v.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(), v.end());
        if (v.size() % 2 != 0)
        {
            int size = v.size();
            int mid = size / 2;
            return v[mid];
        }
        else
        {
            int size = v.size();
            int mid = size / 2;
            return (v[mid - 1] + v[mid]) / 2.0;
        }
        return 0;
    }
};