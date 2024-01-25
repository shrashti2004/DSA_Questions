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
    bool isPalindrome(ListNode* head) {
        std::vector<int> v;
        ListNode* temp = head;

        // Traverse the linked list and store values in the vector
        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        // Compare elements at corresponding positions from the beginning and end of the vector
        for (int i = 0; i < v.size() / 2; ++i) {
            if (v[i] != v[v.size() - 1 - i]) {
                return false;
            }
        }

        // If all pairs match, return true
        return true;
    }
};
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         // Check for base cases: empty list or single-node list
//         if (head == NULL || head->next == NULL) {
//             return true;
//         }

//         // Reverse the list and store it in r_head
//         ListNode* r_head = NULL;
//         ListNode* ptr = head;
//         while (ptr != NULL) {
//             ListNode* temp = new ListNode(ptr->val);
//             temp->next = r_head;
//             r_head = temp;
//             ptr = ptr->next;
//         }

//         // Compare the original list and reversed list
//         while (head && r_head) {
//             if (head->val != r_head->val) {
//                 return false;
//             }
//             head = head->next;
//             r_head = r_head->next;
//         }

//         // If the loop is executed fully, return true
//         return true;
//     }
// };
