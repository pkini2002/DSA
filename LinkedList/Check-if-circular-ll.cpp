bool isCircular(Node *head)
{
  // Your code here
  Node *curr=head;
  while(curr!=NULL){
      curr=curr->next;
      if(curr==head)
          return true;
  }
  return false;
}
