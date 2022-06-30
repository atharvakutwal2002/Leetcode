// #include <bits/stdc++.h>
// using namespace std;

// // ListNode *reverseKGroup(ListNode *head, int k)
// // {
// //     if (head == NULL)
// //     {
// //         return NULL;
// //     }
// //     int size = 0;
// //     ListNode *te mp = head;
// //     while (temp != NULL)
// //     {
// //         temp = temp->next;
// //         size++;
// //     }
// //     int remainder = size/ k;
// //     if (size % k == 0)
// //     {
// //         int count = 0;
// //         ListNode *prev = NULL;
// //         ListNode *curr = head ;
// //         ListNode *forward = NULL;

// //         while (curr != NULL && count < k)
// //         {
// //             forward = curr->next;
// //             curr->next = prev;

// //             prev = curr;
// //             curr = forward;
// //             count++;
// //         }
// //         if (forward != NULL)
// //         {
// //             head->next = reverseKGroup(forward, k);
// //         }

// //         return prev;
// //     }

// //         int count = 0;
// //         ListNode *prev = NULL;
// //         ListNode *curr = head;
// //         ListNode *forward = NULL;

// //         while (curr != NULL && count < remainder)
// //         {
// //             forward = curr->next;
// //             curr->next = prev;

// //             prev = curr;
// //             curr = forward;
// //             count++;
// //         }
// //         if (forward != NULL)
// //         {
// //             head->next = reverseKGroup(forward, k);
// //         }

// //         return prev;

// // }

// int remaining_nodes(ListNode *head)
// {
//     if (head == NULL)
//     {
//         return 0;
//     }

//     int cnt = 0;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     return cnt;
// }

// ListNode *reverseKGroup(ListNode *head, int k)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     int count = 0;
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     ListNode *forward = NULL;

//     while (curr != NULL && count < k)
//     {
//         forward = curr->next;
//         curr->next = prev;

//         prev = curr;
//         curr = forward;
//         count++;
//     }
//     if (forward != NULL && remaining_nodes(head->next) >= k)
//     {
//         head->next = reverseKGroup(forward, k);
//     }

//     return prev;
// }

// ********   final correct solution   **********  //

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
    int remaining_nodes(ListNode *head)
    {
        if (head == NULL)
        {
            return 0;
        }

        int cnt = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }

        return cnt;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL)
        {
            return NULL;
        }

        int count = 0;
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;

        while (curr != NULL && count < k)
        {
            forward = curr->next;
            curr->next = prev;

            prev = curr;
            curr = forward;
            count++;
        }
        if (forward != NULL && remaining_nodes(forward) >= k)
        {
            head->next = reverseKGroup(forward, k);
        }
        else
        {
            head->next = forward;
        }

        return prev;
    }
};