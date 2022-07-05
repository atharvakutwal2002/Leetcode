#include <bits/stdc++.h>
using namespace std;

ListNode *sortList(ListNode *head)
{
    if(head == NULL){
        return head;
    }
    if (head->val < head->next->val)
    {
        ListNode * temp= head->next->next;
        head->next->next= head;
        head->next=head;
        
    }
    
}
