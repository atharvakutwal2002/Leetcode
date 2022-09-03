#include <bits/stdc++.h>
using namespace std;

int rev(int x)
{

    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if((ans > INT_MAX/10)||(ans< INT_MIN)){
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}

int main()
{
    cout << rev(123) << endl;
    return 0;
}