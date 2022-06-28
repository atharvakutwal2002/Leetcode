#include<bits/stdc++.h>
using namespace std;

ListNode* swapPairs(ListNode* head){
    if (head == NULL || head->next== NULL)
    {
        return head;
    }
    ListNode * first = head;
    ListNode * remainig_list = first->next->next;
    ListNode * second= head->next;
    first->next =swapPairs(remaining_list);

    second->next= first;
    
    
    
    
    return second;
}