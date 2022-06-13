#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n, x, y, i, k = 0, co = 1;
//         cin >> n;
//         int arr[n];
//         k = n;
//         arr[n - 1] = n;
//         for (i = 1; i < n; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 arr[n - 1 - i] = k - (n - i);
//                 k = arr[n - 1 - i];
//             }
//             else if (i % 2 == 0)
//             {
//                 arr[n - 1 - i] = k + (n - i);
//                 k = arr[n - 1 - i];
//             }
//         }
//         for (i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;

//     }
//     return 0;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, y, i, k, co = 0;
        cin >> x >> y;

        n = abs(x - y);
        for (i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    co += 1;
                }
                else
                {
                    co += 2;
                }
            }
        }
        cout << co << endl;
    }
    return 0;
}