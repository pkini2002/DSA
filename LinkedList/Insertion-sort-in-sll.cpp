class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* temp=head_ref;
        for(Node* i=temp;i!=NULL;i=i->next){
            for(Node* j=i;j!=NULL;j=j->next){
                if(i->data > j->data){
                    swap(i->data,j->data);
                }
            }
        }
        return head_ref;
    }
    
};
