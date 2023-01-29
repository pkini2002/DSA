class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int>s;
        Node *curr=head;
        if(curr==NULL){
            return head;
        }
        else{
            s.insert(curr->data);
        }
        
        while(curr!=NULL && curr->next!=NULL){
            if(s.find(curr->next->data)!=s.end()){
                curr->next=curr->next->next;
            }
            else{
                s.insert(curr->next->data);
                curr=curr->next;
            }
        }
        return head;
    }
};
