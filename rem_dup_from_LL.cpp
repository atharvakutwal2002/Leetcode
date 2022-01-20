class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode * previous=head;
        ListNode * p=head->next;
        
        while(p!=NULL){
            if(p->val==previous->val){
                previous->next=p->next;
                p=p->next;
            }
            else{
                previous=p;
                p=p->next;
            }
            
        }
        return head;
    }
};