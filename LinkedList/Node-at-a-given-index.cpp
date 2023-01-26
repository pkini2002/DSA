int GetNth(struct node* head, int index){
  int count=0;
  if(index==1){
      return head->data;
  }
  struct node* curr=head;
  while(curr!=NULL){
      count++;
      if(count==index){
          return curr->data;
      }
      curr=curr->next;
  }
  return -1;
}
