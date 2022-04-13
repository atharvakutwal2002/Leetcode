#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };


ListNode *swapPairs(ListNode *head)
{
    // ListNode *temp = new ListNode();
    // temp = head;
    // while (temp != NULL)
    // {
    //     ListNode *first = new ListNode();
    //     first = head;
    //     ListNode *second = new ListNode();
    //     second = head->next;
    //     temp = second->next;
    //     first->next = temp;
    //     second->next = first;
    // }

    // while (temp != NULL)
    // {
    //     temp = head->next->next;
    //     head->next = head;
    //     head = temp;
    // }
    // return head;
}*/

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *first = head, *second = head->next;
        first->next = swapPairs(head->next->next);
        second->next = first;
        return second;
    }
};
