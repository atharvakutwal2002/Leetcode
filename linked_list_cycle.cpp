

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (NULL == head)
            return false;
        ListNode *p = head;
        ListNode *q = head;
        while (true)
        {
            p = p->next;
            q = q->next;
            if (NULL != q)
                q = q->next;
            if (NULL == q || NULL == p)
                return false;
            else if (p == q)
                return true;
        }
    }
};

// some cases fail with below approach

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head->next == NULL)
        {
            return false;
        }
        ListNode *temp = head;
        vector<ListNode *> v;
        v.push_back(temp);
        while (temp != NULL)
        {
            temp = temp->next;
            v.push_back(temp);
            for (int i = 0; i < v.size(); i++)
            {
                if (temp == v[i])
                {
                    return true;
                }
            }
        }
        return false;
    }
};