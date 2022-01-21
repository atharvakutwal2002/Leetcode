#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> ans(rowIndex + 1);
    for (int i = 0; i < (rowIndex + 1); i++)
    {
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;
        for (int j = 0; j < i; j++)
        {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }
    return ans[rowIndex];
}

/*
                1
               1 1
              1 2 1
             1 3 3 1

             ans[3][2]=ans[2][1]+ans[2][2]
                      =2 + 1
             ans[3][2]=3
*/