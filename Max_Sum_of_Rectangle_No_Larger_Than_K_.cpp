#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSumSubmatrix(vector<vector<int>> &matrix, int k)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = INT_MIN;
        // prefix sum of every row
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
                matrix[i][j] += matrix[i][j - 1];
        }
        // try every possible width of subarray
        for (int start = 0; start < m; start++)
        {
            for (int end = start; end < m; end++)
            {
                set<int> s = {0};
                int pref_sum = 0;
                // for current width of rectangle
                for (int i = 0; i < n; i++)
                {
                    int sum = matrix[i][end];
                    if (start > 0)
                        sum -= matrix[i][start - 1];
                    pref_sum += sum;
                    auto itr = s.lower_bound(pref_sum - k);
                    if (itr != s.end())
                        ans = max(ans, pref_sum - (*itr));
                    s.insert(pref_sum);
                }
            }
        }
        return ans;
    }
};