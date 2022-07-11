#include <bits/stdc++.h>
using namespace std;

void addAtTail(ListNode *head, ListNode *tail, int data)
{
    ListNode *temp = new ListNode(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

ListNode *clone(ListNode *head)
{
    // make clone of a  linked list
    ListNode *ansHead = NULL;
    ListNode *ansTail = NULL;
    ListNode *temp = head;
    while (temp)
    {
        temp = temp->next;
        addAtTail(ansHead, ansTail, temp->val);
    }

    // change links for both lists
    ListNode *original = head;
    ListNode *cloned = ansHead;
    while (original && cloned)
    {
        ListNode *nxt = original->next;
        original->next = cloned;
        original = nxt;

        nxt = cloned->next;
        cloned->next = original;
        cloned = nxt;
    }

    temp = head;

    while (temp != NULL)
    {
        if (temp->next)
        {
            temp->next->random = temp->random ? temp->random->next : temp->random;
        }
        temp = temp->next->next;
    }

    original = head;
    cloned = ansHead;
    while (original && cloned)
    {
        original->next = cloned->next;
        original = original->next;

        if (original)
        {
            cloned->next = original->next;
        }
        cloned = cloned->next;
    }

    return cloned;
}

//   1   2   3   4
//   | / | / | / |
//   1   2   3   4