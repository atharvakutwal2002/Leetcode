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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector <int> nodes;
//         ListNode * temp =head;
//         while(temp ){
//             nodes.push_back(temp->val);
//             temp=temp->next;
            
//         }
//         vector <int>reverseNodes = nodes;
//         reverse(reverseNodes.begin(), reverseNodes.end());
//         if(nodes==reverseNodes){
//             return true ;
//         }
//         return false;
//     }
// };

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
    ListNode *middle(ListNode *head)
        {
            ListNode *slow = head;
            ListNode *fast = head->next;
            while (fast && fast->next)
            {
                fast = fast->next->next;
                slow = slow->next;

            }
            return slow;
        }
        ListNode *rev(ListNode *head)
        {
            ListNode * prev =NULL;
            ListNode* curr=head;
            ListNode* nxt=NULL;
            while (curr!=NULL)
            {

                nxt= curr->next;
                curr->next= prev;
                prev= curr;
                curr=nxt;
            }
            return prev;

        }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        
         ListNode *mid = middle(head);
         ListNode* temp=mid->next;
        mid->next= rev(temp);
        ListNode *first = head;
        ListNode * second= mid->next;
        while(second){
            if(first->val != second->val){
                return false;
            }
            first= first->next;
            second=second->next;
        }
        return true;
    }
};
//   1 --> 2 --> 3 --> 4
