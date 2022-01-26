#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    vector <int> x;
    int i = 0;
    while (x > 0)
    {
        x[i] = x % 10;
        x = x/ 10;
        i++;
    }
}
