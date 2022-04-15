
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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) {
        return head;
        }
        if(head->val == val) {
            ListNode* temp = head->next;
            head->next = NULL;
            delete(head);
            return removeElements(temp , val);
        }
        head->next = removeElements(head->next , val);
        return head;
    }
};