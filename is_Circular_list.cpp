#include <bits/stdc++.h>
using namespace std;

bool isCircular(ListNode *head)
{
    if (head == NULL)
    {
        return true;
    }

    
    ListNode *temp = head;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp->next == temp)
    {
        return true;
    }
    return false;
}