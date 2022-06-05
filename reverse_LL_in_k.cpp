#include <bits/stdc++.h>
using namespace std;

ListNode *reverseInK(ListNode *head, int k)
{

    int cnt = 0;
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nxt = NULL;
    while (curr != NULL && cnt < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        cnt++;
    }

    if (nxt != NULL)
    {
        head->next = reverseInK(nxt, k);
    }

    return prev;
}