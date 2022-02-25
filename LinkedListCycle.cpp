class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        while(fast!=NULL && slow!=NULL &&fast->next!=NULL)
        {
fast=fast->next->next;
            slow=slow->next; 
            if(fast==slow)
            {
                return 1;
            }
                       
        }
            return 0;
    }
};
