#include <bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> &v)
{
    int s = 0;
    int l = v.size();
    int index = 0;
    int mid = (s + l) / 2;
    while (s <= l)
    {
        if (v[mid] > v[mid + 1] && v[mid] < v[mid - 1])
        {
            index = mid;
            return index;
        }
        else if (v[mid] < v[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
        mid = (s + l) / 2;
    }
    return index;
}

int main()
{
    /*Input: arr = [0,1,0]
    Output: 1

    Input: arr = [0,2,1,0]
    Output: 1
   */
   vector<int> v;
   v.push_back(0);
   v.push_back(1);
   v.push_back(0);
    cout<<peakIndex(v);
    return 0;
}