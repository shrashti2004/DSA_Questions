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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;

        vector<int> list;
        while(temp != NULL){
            list.push_back(temp->val);
            temp = temp->next;
        }

        int cnt = 1;
        int i=0;
        int j = list.size() - 1;
        while(cnt != k){
            cnt++;
            i++;
            j--;
        }

        swap(list[i] , list[j]);

        temp = head;
        i = 0;
        while(temp != NULL){
            temp->val = list[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};
// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//     ListNode *itr = head, *ptr1 = NULL, *ptr2 = NULL;
//     uint n = 0, count = 0;
    
//     while(itr != NULL) {
//         n++;
//         itr = itr->next;
//     }
    
//     itr = head;
//     while(itr != NULL) {
//         count++;
//         if(count == k) {
//             ptr1 = itr;
//         } else if(count == n - k + 1) {
//             ptr2 = itr;
//         }
//         itr = itr->next;
//     }
    
//     if(ptr1 != NULL && ptr2 != NULL)
//         swap(ptr1->val, ptr2->val);
    
//     return head;
// }

//     void swap(int &a, int &b) {
//         int temp;
//         temp = a;
//         a = b;
//         b = temp;
//     }
// };
