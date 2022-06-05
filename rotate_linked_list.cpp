#include <bits/stdc++.h>
using namespace std;

ListNode *rotateRight(ListNode *head, int k)
{
    int no=0;
    ListNode *prev  = head;
    
    ListNode *hd  = head;
    ListNode *nxt  = NULL;
    ListNode * end=head->next;
    while (end->next != NULL)
    {
        prev= prev->next;
        end= end->next;
        no++;
    }
    while (k--)
    {
        end->next= hd;
        prev->next= NULL;
        ans_head= end;

        
        for (int i = 0; i <no ; i++)
        {
            
        }
        
        
        
    }

    return ans_head;
    
    


}