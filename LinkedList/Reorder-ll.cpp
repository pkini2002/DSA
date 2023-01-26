class Solution {
public:
     void reorderList(ListNode* head) {
        vector<int>v;
        ListNode* curr=head;

        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }

        int j=v.size()-1;
        bool flag=true;
        ListNode* temp=head;
        int k=0;

        for(int i=0;i<v.size();i++){
            if(flag){
                temp->val=v[k];
                k++;
                flag=false;
            }
            else{
                temp->val=v[j];
                j--;
                flag=true;
            }
            temp=temp->next;
        }
     }
};
