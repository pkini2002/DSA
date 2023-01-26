int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *curr=head;
       int count=0;
       while(curr!=NULL){
           count++;
           curr=curr->next;
       }
      if(n > count){
          return -1;
      } 
      
      else{
          int trav=count-n;
          Node *temp=head;
          int count1=0;
          while(temp!=NULL){
              if(trav == count1){
                  return temp->data;
              }
              count1++;
              temp=temp->next;
          }
        //   return temp->data;
      }
    return -1;
}
