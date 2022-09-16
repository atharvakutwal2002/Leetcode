#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> v)
{
    int s = 0;
    int l = v.size();
    int mid = (s + l) / 2;
    int index = 0;
    while (s < l)
    {
        if ((v[mid] < v[mid - 1]) && (v[mid] < v[mid + 1]))
        {

            index = mid;
            return index;
        }
        else if (v[mid] > v[0])
        {
            s = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
        mid= (s+l)/2;
    }
    return index;
}

int main()
{
    vector <int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(1);
    v.push_back(2);
    cout<<getPivot(v);
    return 0;
}