class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      int count=1;
      if(x==1){
          head_ref=head_ref->next;
          return head_ref;
      }
      
      Node *curr=head_ref;
      while(count<x){
          count++;
          curr=curr->next;
      }
      
      if(curr->next==NULL){
          curr->prev->next=NULL;
      }
      else{
          curr->prev->next=curr->next;
          curr->next->prev=curr->prev;
      }
      return head_ref;
    }
};
