#include <bits/stdc++.h>
using namespace std;

void deleteNode(ListNode *node)
{
    
    
    ListNode* curr= node;
    curr->val= curr->next->val;

    curr->next= curr->next->next;
    
    
    
}