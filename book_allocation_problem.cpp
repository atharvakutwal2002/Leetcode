#include <bits/stdc++.h>
using namespace std;

bool possibleSoln(vector<int> v, int n, int stdCount, int mid)
{
    int sum = 0;
    int studentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if ((sum + v[i]) <= mid)
        {
            sum += v[i];
        }
        else
        {

            studentCount++;
            if (studentCount > stdCount || v[i] > mid)
            {
                return false;
            }
            sum = 0;
            sum += v[i];
        }
    }
    return true;
}

int minBooks(vector<int> v, int n, int stdCount)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    int l = sum;
    int mid = (s + l) / 2;
    int ans = 0;
    while (s <= l)
    {
        if (possibleSoln(v, n, stdCount, mid))
        {
            ans = mid;
            l = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + l) / 2;
    }
    return ans;
}
