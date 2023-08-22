/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head==nullptr){
            return false;
        }
        ListNode *start =head,*end=head;
        while(end!=nullptr&&end->next!=nullptr){
            start=start->next ;
            end=end->next->next ;
        
        if(start==end){
            return true ;
        }

        }
        return false ;
    }
};
