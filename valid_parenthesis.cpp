#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (i == 0 || st.empty() || st.top() != '(')
                {
                    return false;
                }
                st.pop();
            }
            else if (s[i] == '}')
            {
                if (i == 0 || st.empty() || st.top() != '{')
                {
                    return false;
                }
                st.pop();
            }
            else if (s[i] == ']')
            {
                if (i == 0 || st.empty() || st.top() != '[')
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};