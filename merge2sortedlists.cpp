class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL && list2 != NULL)
        {
            return list2;
        }
        else if (list1 != NULL && list2 == NULL)
        {
            return list1;
        }
        else if (list1 == NULL && list2 == NULL)
        {
            return NULL;
        }
        else
        {
            ListNode *ft = NULL, *fh = NULL;
            if (list1->val < list2->val)
            {
                ft = list1;
                fh = list1;
                list1 = list1->next;
            }
            else
            {
                ft = list2;
                fh = list2;
                list2 = list2->next;
            }
            while (list1 != NULL && list2 != NULL)
            {
                if (list2->val < list1->val)
                {
                    ft->next = list2;
                    ft = ft->next;
                    list2 = list2->next;
                }
                else
                {
                    ft->next = list1;
                    ft = ft->next;
                    list1 = list1->next;
                }
            }
            if (list2 != NULL)
            {
                ft->next = list2;
            }
            if (list1 != NULL)
            {
                ft->next = list1;
            }
            return fh;
        }
    }
};