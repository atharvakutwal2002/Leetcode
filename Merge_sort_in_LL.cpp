#include <bits/stdc++.h>
using namespace std;

ListNode *findMid(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

ListNode *merge(ListNode *first, ListNode *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    ListNode *ans = new ListNode(-1);
    ListNode *temp = ans;
    while (first && second)
    {
        if (first->val < second->val)
        {
            temp->next = first;
            temp = first;
            first = first->next;
        }
        else
        {
            temp->next = second;
            temp = second;
            second = second->next;
        }
    }
    while (first)
    {
        temp->next = first;
        temp = first;
        first = first->next;
    }
    while (second)
    {
        temp->next = second;
        temp = second;
        second = second->next;
    }
    ans = ans->next;
    return ans;
}

ListNode *mergeSort(ListNode *head)
{
    if (head && head->next)
    {
        return head;
    }

    ListNode *mid = findMid(head);

    ListNode *left = head;
    ListNode *right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    ListNode *ans = merge(left, right);

    return ans;
}