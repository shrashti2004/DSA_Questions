/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//   ListNode* node = head;
//   while (node != nullptr && node->next != nullptr) {
//     if (node->next->val == node->val) {
//       node->next = node->next->next;
//     } else {
//       node = node->next;
//     }
//   }
//   return head;


//     }
// };


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head ||!head->next) return head;
        ListNode* temp=head;

        while(temp->next!=NULL){
            if(temp->val==temp->next->val){
               
               temp->next=temp->next->next;
               
            }else{
               temp=temp->next;
            }
        }
        return head;


    }
};
