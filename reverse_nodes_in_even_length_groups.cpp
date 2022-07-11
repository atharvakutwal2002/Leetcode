#include <bits/stdc++.h>
using namespace std;

ListNode *rev(ListNode *head , int k )
{
    int cnt =0;
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nxt = NULL;
    while (curr && cnt< k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        cnt++;
    }
    return prev;
}

ListNode *reverseEvenLengthGroups(ListNode *head)
{
    
    
}