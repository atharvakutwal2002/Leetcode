// #include <bits/stdc++.h>
// using namespace std;

// ListNode * helper(ListNode * first, ListNode * second){
//     ListNode * prev1 = first;
//     ListNode * next1 = prev1->next;
//     ListNode * curr2 = second;
//     ListNode * next2=NULL;
//     while (next1 && curr2)
//     {
//         if(curr2->val >= prev1 && curr2->val <=next1){
//             prev1->next= curr2;
//             next2= curr2->next;
//             curr2->next= next1;
//             prev1=curr2;
//             curr2= next2;
//         }
//         if(next1==NULL){
//             next1->next= curr2;
//         }
//         prev1=prev1->next;
//         next1= next1->next;
//         curr2=curr->next;
//     }
//     return first;

// }

// ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
// {
//     if(list1->val > list2->val){
//         return helper(list2, list1);
//     }
//     return helper(list1, list2);

// }

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


//***************final solution********//


class Solution
{
public:
    ListNode *helper(ListNode *first, ListNode *second)
    {

        ListNode *prev1 = first;
        ListNode *next1 = prev1->next;
        ListNode *curr2 = second;
        ListNode *next2 = NULL;
        while (next1 && curr2)
        {
            if (curr2->val >= prev1->val && curr2->val <= next1->val)
            {
                prev1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                prev1 = curr2;
                curr2 = next2;
            }
            else
            {
                prev1 = next1;
                next1 = next1->next;
                if (next1 == NULL)
                {
                    prev1->next = curr2;
                    return first;
                }
            }
        }
        return first;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
        {
            return list2;
        }
        else if (list2 == NULL)
        {
            return list1;
        }
        else if (list1 == NULL && list2 == NULL)
        {
            return NULL;
        }
        else if (list1->next == NULL && list2->next == NULL)
        {
            if (list1->val > list2->val)
            {
                list2->next = list1;
                return list2;
            }
            list1->next = list2;
            return list1;
        }
        if (list2->next == NULL && list2->val < list1->val)
        {
            list2->next = list1;
            return list2;
        }
        if (list1->val > list2->val)
        {
            return helper(list2, list1);
        }
        return helper(list1, list2);
    }
};