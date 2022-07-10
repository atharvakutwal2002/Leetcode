#include <bits/stdc++.h>
using namespace std;

// 2nd problem 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *rev(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nxt = NULL;
        while (curr)
        {
            nxt = curr->next;
            curr->next = prev;

            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    void insertAtTail(ListNode *&head, ListNode *&tail, int data)
    {
        ListNode *temp = new ListNode(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    ListNode *add(ListNode *first, ListNode *second)
    {
        int carry = 0;
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;
        while (first && second)
        {
            int sum = carry + first->val + second->val;
            carry = sum / 10;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            first = first->next;
            second = second->next;
        }
        while (first)
        {
            int sum = carry + first->val;
            carry = sum / 10;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            first = first->next;
        }
        while (second)
        {
            int sum = carry + second->val;
            carry = sum / 10;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            second = second->next;
        }
        while (carry)
        {
            int sum = carry;
            carry = sum / 10;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
        }
        return ansHead;
    }

    ListNode *addTwoNumbers(ListNode *first, ListNode *second)
    {
        // first= rev(first);
        // second= rev(second);
        return add(first, second);
    }
};