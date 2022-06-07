#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int X;
        cin >> X;
        for (int i = 1; i < X; i++)
        {
            if (i == 1 || i == X)
            {
                cout << "3";
            }
            else
            {
                cout << "0";
            }
        }
        cout << '\n';
    }

    return 0;
}