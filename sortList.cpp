#include <bits/stdc++.h>
using namespace std;

ListNode *getMid(ListNode *head)
{
    ListNode *ans = NULL;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ans = slow;
    slow->next = NULL;
    return ans;
}

ListNode mergeLists(ListNode *l1, ListNode *l2)
{
    if (l1->val > l2->val)
    {
        l2->next = l1;
    }
    else
    {
        l1->next = l2;
    }
}

ListNode *sortList(ListNode *head)
{
    if (head == NULL && head->next == NULL)
    {
        return head;
    }
    ListNode *left = sortList(head);
    ListNode *mid = getMid(head);
    List *right = sortList(mid);
    return mergeLists(left, right);
}

// 1   2   3    4

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
    ListNode *mergeLists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(-1);
        ListNode *current = dummyHead;
        current = l1;
        while (current)
        {
            current = current->next;
        }
        current = dummyHead;
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                current->next = l1;
                l1 = l1->next;
            }
            else
            {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        if (l1)
        {
            current->next = l1;
        }
        else if (l2)
        {
            current->next = l2;
        }
        return dummyHead->next;
    };

    ListNode *sortList(ListNode *head)
    {
        if (head == NULL && head->next == NULL)
        {
            return head;
        }
        ListNode *curr = head;
        while (curr)
        {
            curr = curr->next;
        }
        ListNode *slow = head, *fast = head;
        ListNode *slowPrev;
        while (fast && fast->next)
        {
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        slowPrev->next = nullptr;
        head = sortList(head);
        slow = sortList(slow);

        return mergeLists(head, slow);
    }
};

///*******************final solution

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
    ListNode *merge(ListNode *a, ListNode *b)
    {
        ListNode *newHead = new ListNode(0);
        ListNode *cur = newHead;

        // cout << "in merge a: " << endl;
        cur = a;
        while (cur)
        {
            // cout << cur->val << " ";
            cur = cur->next;
        }
        // cout << endl;

        // cout << "in merge b: " << endl;
        // cur = b;
        // while(cur){
        //     cout << cur->val << " ";
        //     cur = cur->next;
        // }
        // cout << endl;

        cur = newHead;

        // cout << "building list: " << endl;
        while (a && b)
        {
            if (a->val <= b->val)
            {
                // use new -> time and space specified in first two rows
                //  cur->next = new ListNode(a->val);
                // not use new -> time and space specified in second two rows
                cur->next = a;
                // cout << a->val << " ";
                a = a->next;
            }
            else
            {
                // cur->next = new ListNode(b->val);
                cur->next = b;
                // cout << b->val << " ";
                b = b->next;
            }
            cur = cur->next;
        }

        // Method 1 to add remaining list
        //         while(a){
        //             cur->next = new ListNode(a->val);
        //             cout << a->val << " ";
        //             a = a->next;
        //             cur = cur->next;
        //         }

        //         while(b){
        //             cur->next = new ListNode(b->val);
        //             cout << b->val << " ";
        //             b = b->next;
        //             cur = cur->next;
        //         }

        // Method 2 to add remaining list
        if (a)
        {
            cur->next = a;
        }
        else if (b)
        {
            cur->next = b;
        }

        // cout << endl;

        // cout << "list built: " << endl;
        // cur = newHead->next;
        // while(cur){
        //     cout << cur->val << " ";
        //     cur = cur->next;
        // }
        // cout << endl;

        return newHead->next;
    };

    ListNode *sortList(ListNode *head)
    {
        // length 0 or length 1, we cannot split anymore
        if (!head || !head->next)
            return head;

        // cout << "current list: " << endl;
        ListNode *cur = head;
        while (cur)
        {
            // cout << cur->val << " ";
            cur = cur->next;
        }
        // cout << endl;

        // split list
        ListNode *slow = head, *fast = head;
        ListNode *slowPrev; // used to cut the list into half

        while (fast && fast->next)
        {
            slowPrev = slow;

            slow = slow->next;
            fast = fast->next->next;
        }

        /*
        now "head" and "slow" are the head of two lists,
        we need to split them by setting "slow"'s previous node's next to nullptr
        */
        slowPrev->next = nullptr;

        // sort the splitted lists
        head = sortList(head);
        slow = sortList(slow);

        return merge(head, slow);
    }
};