class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        bool flag = false;
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};