Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* slow=head;
	Node* fast=head;
	
	Node* temp=new Node(x);
	
	while(fast->next!=NULL && fast->next->next!=NULL){
	    slow=slow->next;
	    fast=fast->next->next;
	}
	temp->next=slow->next;
	slow->next=temp;
	return head;
}
