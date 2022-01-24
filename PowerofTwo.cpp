#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
        {
            return true;
        }
        if ((n % 2) == 0)
        {
            for (int i = 0; i < 32; i++)
            {
                if (pow(2, i) == n)
                {
                    return true;
                }
            }
        }

        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    if (isPowerOfTwo(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << " false" << endl;
    }

    return 0;
}