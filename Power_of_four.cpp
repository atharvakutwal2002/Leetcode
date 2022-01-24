#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n)
{
    if (n == 1)
    {
        return true;
    }
    if ((n % 4) == 0)
    {
        for (int i = 0; i < 32; i++)
        {
            if (pow(4, i) == n)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPowerOfFour(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << " false" << endl;
    }

    return 0;
}