int isLengthEvenOrOdd(struct Node* head)
{
    int count=0;
    struct Node* curr=head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    
    if(count%2==0)
         return 0;
    else
         return 1;
}
