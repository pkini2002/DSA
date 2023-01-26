class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                ListNode *temp=head;
                while(slow!=temp){
                    slow=slow->next;
                    temp=temp->next;
                }
                return temp;
            }
        }
        return NULL;
    }
};
