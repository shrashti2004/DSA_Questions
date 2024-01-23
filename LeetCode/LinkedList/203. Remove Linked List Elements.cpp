class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* dum = new ListNode(0);
        ListNode* t1 = dum;
        
        while (temp != NULL) {
            if (temp->val != val) {
                t1->next = temp;
                t1 = t1->next;  // Move t1 to the next node
            }
            temp = temp->next;
        }
        
        t1->next = NULL;  // Set the next of the last node to NULL
        return dum->next;  // Return the next of the dummy node
    }
};
