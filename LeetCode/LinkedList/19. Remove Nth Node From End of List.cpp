class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head,*fast=head;
        //  according to n value  fast will move
        for(int i=0;i<n;i++){
            fast=fast->next; 
        } 
        if(fast==NULL){
            return head->next;
        }
        // Fast and Slow both will cover n-k from start
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
