Node* deleteMid(Node* head)
{
    // Your Code Here
    if(head==NULL || head->next==NULL)
            return NULL;
    Node* slow=head;
    Node* fast=head;
    Node* curr=NULL;
    while(fast!=NULL && fast->next!=NULL){
        curr=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    curr->next=slow->next;
    return head;
}
