#include <bits/stdc++.h>
using namespace std;

ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    ListNode *prevNode = NULL;
    ListNode *curr = head;
    ListNode *NextNode = head->next;

    while (NextNode != NULL)
    {
        NextNode = curr->next;
        curr->next = prevNode;
        prevNode = curr;
        curr = NextNode;
    }
    return prevNode;
}