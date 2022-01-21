#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    // int minvalue=*minvalue_element(prices.begin(),prices.end());
    // int

    // int minvalue = prices[0];
    // int minvalueIndex = 0;

    // for (int i = 1; i < prices.size(); i++)
    // {
    //     if (prices[i] < minvalue)
    //     {
    //         minvalue = prices[i];
    //         minvalueIndex = (i); //    vector<int> v = {7, 1, 5, 3, 6, 4};
    //     }
    // }
    // if (minvalueIndex == prices.size() - 1)
    // {
    //     return prices[0];
    // }
    // else
    // {

    //     int maxvalue = 0;
    //     int maxvalueIndex = minvalueIndex;

    //     for (int i = (maxvalueIndex + 1); i < prices.size(); i++)
    //     {
    //         if (prices[i] > maxvalue)
    //         {
    //             maxvalue = prices[i];
    //             maxvalueIndex = (i);
    //         }
    //     }

    //     return abs(maxvalue - minvalue);
    // }

    // final
     if (prices.size() == 0)
         return 0;

    int ans = 0;

    int start = prices[0], end = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < start)
        {
            // restart as session
            ans = max(ans, end - start);
            start = prices[i];
            end = prices[i];
        }
        else
        {
            // continue current session
            end = max(end, prices[i]);
        }
    }
    ans = max(ans, end - start);
    return ans;
}

int main()
{
    // vector<int> v = {7, 1, 5, 3, 6, 4};
    vector<int> v = {2,4,1};

    cout << maxProfit(v);

    return 0;
}