#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPower2(const vector<int> &digits)
    {

        int num = 0;
        for (int digit : digits)
            num = num * 10 + digit;
        return isPower2(num);
    }

    bool isPower2(int x)
    {
        for (int i = 0; i <= 30; i++)
            if (x == (1 << i))
                return true;
        return false;
    }

    vector<int> getDigits(int N)
    {
        vector<int> res;
        while (N)
        {
            res.push_back(N % 10);
            N /= 10;
        }
        return res;
    }
    bool reorderedPowerOf2(int N)
    {
        vector<int> digits = getDigits(N);
        sort(digits.begin(), digits.end());
        do
        {
            if (digits[0] == 0)
                continue;
            if (isPower2(digits))
                return true;
        } while (next_permutation(digits.begin(), digits.end()));

        return false;
    }
};