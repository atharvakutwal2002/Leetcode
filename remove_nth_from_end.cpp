#include <bits/stdc++.h>


using namespace std;

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode * slow = head;
    ListNode * fast = head;

    for (int  i = 0; i < n+1; i++)
    {
        if (fast==NULL)
        {
            return slow->next;
        }
        fast=fast->next;
    }
    while (fast!= NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;


    return head;
    
    


    
    
    
}