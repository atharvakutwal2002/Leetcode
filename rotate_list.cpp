#include <bits/stdc++.h>
using namespace std;

ListNode *rotateRight(ListNode *head, int k)
{
    ListNode* temp= head;
    int size=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    int lastNodes= size-k;
    ListNode *address=NULL;
    ListNode * temp2 =head;
    for (int i = 0; i < lastNodes; i++)
    {
        temp2=temp2->next;
    }
    address = temp2->next;
    ListNode* finalHead= adress;
    temp2->next=NULL;
    while (address!=NULL)
    {
        address=address->next;

    }
    address->next=head;
    return finalHead;
    
    
    
}