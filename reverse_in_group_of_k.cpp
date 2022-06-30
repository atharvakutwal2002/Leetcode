#include <bits/stdc++.h>
using namespace std;

// ListNode *reverseKGroup(ListNode *head, int k)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     int size = 0;
//     ListNode *te mp = head;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         size++;
//     }
//     int remainder = size/ k;
//     if (size % k == 0)
//     {
//         int count = 0;
//         ListNode *prev = NULL;
//         ListNode *curr = head ;
//         ListNode *forward = NULL;

//         while (curr != NULL && count < k)
//         {
//             forward = curr->next;
//             curr->next = prev;

//             prev = curr;
//             curr = forward;
//             count++;
//         }
//         if (forward != NULL)
//         {
//             head->next = reverseKGroup(forward, k);
//         }

//         return prev;
//     }

//         int count = 0;
//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         ListNode *forward = NULL;

//         while (curr != NULL && count < remainder)
//         {
//             forward = curr->next;
//             curr->next = prev;

//             prev = curr;
//             curr = forward;
//             count++;
//         }
//         if (forward != NULL)
//         {
//             head->next = reverseKGroup(forward, k);
//         }

//         return prev;

// }

ListNode *reverseKGroup(ListNode *head, int k)
{
    
}