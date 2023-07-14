class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *tmp = head;
        while (tmp != NULL && tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val)
            {
                tmp->next = tmp->next->next;
            }
            if (tmp->next == NULL)
                break;
            else if (tmp->val != tmp->next->val)
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};