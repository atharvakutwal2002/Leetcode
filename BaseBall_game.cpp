#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        stack<int> st;
        int x, y;
        for (int i = 0; i < ops.size(); i++)
        {
            switch (ops[i][0])
            {
            case 'C':
                st.pop();
                break;
            case 'D':
                x = st.top();
                st.push(x * 2);
                break;
            case '+':
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();

                st.push(y);
                st.push(x);
                st.push(x + y);
                break;

            default:
                x = atoi(ops[i].c_str());
                st.push(x);
                break;
            }
        }

        int ans = 0;
        while (st.size() > 0)
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};