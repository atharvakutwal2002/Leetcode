#include<bits/stdc++.h>
using namespace std;

ListNode* middleNode(ListNode* head) {
    ListNode * slow = head;
    ListNode * fast= head;
    while (fast != NULL)
    {
        slow= slow->next;
        fast = fast->next->next;
    }
     return slow; 
}