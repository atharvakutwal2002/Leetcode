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
 */
class Solution
{
public:
    void addAtTail(ListNode *&head, ListNode *&tail, int data)
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

    ListNode *helper(ListNode *head)
    {
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        while (temp2 && temp2->next)
        {
            temp2 = temp2->next;
            if (temp2->val == 0)
            {
                int ans = 0;
                ListNode *curr = temp1;
                while (curr != temp2)
                {
                    ans += curr->val;
                    curr = curr->next;
                }
                addAtTail(ansHead, ansTail, ans);

                temp1 = temp2;
            }
        }
        return ansHead;
    }

    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != NULL and temp->val == 0)
        {
            return helper(temp);
        }
        return NULL;
    }
};