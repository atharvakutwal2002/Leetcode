#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int bSearch(int x)
    {
        int s = 0;
        int e = x;
        long long int mid = s + (e - s) / 2;
        int ans = 0;
        while (s <= e)
        {
            long long int sq = mid * mid;
            if (sq == x)
            {
                return mid;
            }
            if (sq < x)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    double precisedAns(int n, int precision, int tempSol)
    {
        double factor = 1;
        double ans = tempSol;

        for (int i = 0; i < precision; i++)
        {
            factor = factor / 10;
            for (double j = ans; j * j < n; j = j + factor)
            {
                ans = j;
            }
        }
        return ans;
    }
    int mySqrt(int x)
    {
        if (x == 1)
        {
            return 1;
        }
        return bSearch(x);
    }
};