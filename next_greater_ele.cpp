#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack <int> st;
    st.push(INT_MIN);
    unordered_map<int , int> map;
    vector<int> ans;
    for (int i = 0; i < nums2.size(); i++)
    {
        int ele= nums2[i];
        while (st.top() < ele)
        {
            st.pop();
        }
        map[ele]=st.top();
        st.push(ele);
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        ans[i]=map[nums1[i]];
    }
    return ans;
    
    
}
